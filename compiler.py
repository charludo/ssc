from lark import Tree
from itertools import product
from helpers import and_clause, or_clause, grouped


def prep_value(value):
    if value is None:
        return dict(name="num", value=0)
    elif isinstance(value, int):
        return dict(name="num", value=value)
    else:
        return dict(name=value, value=[1, 2, 3, 4, 5, 6, 7, 8, 9])


class Compiler:
    def __init__(self, tree):
        self.tree = tree
        print(self.visit(tree))

    def visit(self, node):
        if isinstance(node, Tree):
            type, value, children = node.data.value, None, node.children
        else:
            type, value, children = node.type, node.value, []

        if type == "proposition":
            field = self.visit(children[0])
            comparison = self.comparison_map[self.visit(children[1])]
            value_map = self.visit(children[2])

            return comparison(field, value_map)

        elif type == "expression":
            if children[1] is None:
                return self.visit(children[0])

            left, operator, right = [self.visit(child) for child in children]

            return operator(left, right)

        if type == "FIELD":
            return prep_value(value)
        elif type == "NUMBER":
            return prep_value(int(value))
        elif type == "OPERATOR":
            return self.operator_map[value]
        elif type == "COMPARISON":
            return value

    @staticmethod
    def EQ(field, value_map):
        field = field["name"]

        if isinstance(value_map, dict) and value_map["name"] == "num":
            return f"{field}{value_map['value']}"
        elif isinstance(value_map, dict):
            right_name = value_map["name"]
            values = value_map["value"]
            return grouped(or_clause([f"({field}{i} & {right_name}{i})" for i in values]))

        const, names, combs = value_map

        if const:
            return f"{field}{const}"

        options = []
        # outer loop: values the field can have
        for fv in range(9):
            # middle loop: value tuples that fit the current value of the outer loop
            o_vals = []
            for tuple in combs[fv]:
                # inner loop: assign values from the tuple to the fieldnames
                t_vals = [f"{field}{fv+1}"]
                for i in range(len(names)):
                    t_vals.append(f"{names[i]}{tuple[i]}")
                o_vals.append(grouped(and_clause(t_vals)))
            if len(o_vals):
                options.append(or_clause(o_vals))
        return(grouped(or_clause(options)))

    @staticmethod
    def ADD(left, right):
        if left["name"] == "num" and right["name"] == "num":
            return left["value"] + right["value"], [], []
        elif left["name"] == "num":
            return None, [right["name"]], [[(i-left["value"],)] if i-left["value"] > 0 else [] for i in right["value"]]
        elif right["name"] == "num":
            return None, [left["name"]], [[(i-right["value"],)] if i-right["value"] > 0 else [] for i in left["value"]]
        else:
            const = None
            names = [left["name"], right["name"]]
            cartesian = list(product(left["value"], right["value"]))
            cartesian = [[c for c in cartesian if c[0] + c[1] == i] for i in range(1, 10)]
            return const, names, cartesian

    @staticmethod
    def SUB(left, right):
        if left["name"] == "num" and right["name"] == "num":
            return left["value"] - right["value"], [], []
        elif left["name"] == "num":
            return None, [right["name"]], [[(left["value"]-i,)] if left["value"]-i > 0 else [] for i in right["value"]]
        elif right["name"] == "num":
            return None, [left["name"]], [[(i+right["value"],)] if i+right["value"] < 10 else [] for i in left["value"]]
        else:
            const = None
            names = [left["name"], right["name"]]
            cartesian = list(product(left["value"], right["value"]))
            cartesian = [[c for c in cartesian if c[0] - c[1] == i] for i in range(1, 10)]
            return const, names, cartesian

    comparison_map = {
        "=": EQ.__func__
    }

    operator_map = {
        "+": ADD.__func__,
        "-": SUB.__func__
    }
