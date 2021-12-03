from lark import Tree
from itertools import product


def prep_args(func):
    def prep_value(value):
        if value is None:
            return "num", 0
        elif isinstance(value, int):
            return "num", value
        else:
            return value, [1, 2, 3, 4, 5, 6, 7, 8, 9]

    def inner(left, right):
        name, value = prep_value(left)
        le = dict(name=name, value=value)

        name, value = prep_value(right)
        ri = dict(name=name, value=value)

        return func(le, ri)
    return inner


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
            return value
        elif type == "NUMBER":
            return int(value)
        elif type == "OPERATOR":
            return self.operator_map[value]
        elif type == "COMPARISON":
            return value

    @staticmethod
    def EQ(field, value_map):
        print(value_map)
        const, names, combs = value_map
        if const:
            return f"{field}{const}"

    @staticmethod
    @prep_args
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

    comparison_map = {
        "=": EQ.__func__
    }

    operator_map = {
        "+": ADD.__func__
    }
