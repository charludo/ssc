from src import settings
from lark import Tree
from src.operators import ADD, SUB, MULT, OR
from src.comparators import EQ, NEQ, LT, LEQ, GT, GEQ
from src.modifiers import NORTH, SOUTH, EAST, WEST, HORIZONTAL, VERTICAL, ORTHO, NE, SE, NW, SW, ANY
from src.prefixes import DISTINCT


class Compiler:
    def __init__(self, tree):
        self.tree = tree

    def get_propositions(self):
        # print(self.tree)
        return self.visit(self.tree)

    def visit(self, node):
        if isinstance(node, Tree):
            type, value, children = node.data.value, None, node.children
        else:
            type, value, children = node.type, node.value, []

        if type == "source":
            truths = []
            for child in children:
                truth = self.visit(child)
                if isinstance(truth, dict):
                    truths.extend(truth["values"])
                else:
                    truths.append(truth)
            return truths

        elif type == "ORDER":
            settings.ORDER = int(value)**2
            settings.renew_grid()
            return [["True"]]

        elif type == "proposition":
            left, comparison, right = [self.visit(child) for child in children]
            if isinstance(left, dict):
                values = {"values": []}
                for le in left["values"]:
                    values["values"].append(comparison(le, right))
                return values
            if isinstance(right, dict):
                values = {"values": []}
                for ri in right["values"]:
                    values["values"].append(comparison(left, ri))
                return values
            return comparison(left, right)

        elif type == "builtin":
            builtin, *args = [self.visit(child) for child in children]
            return builtin(args)

        elif type == "expression":
            if len(children) == 1:
                return self.visit(children[0])
            left, operator, right = [self.visit(child) for child in children]
            return operator(left, right)

        elif type == "list":
            return {"values": [self.visit(child) for child in children]}

        elif type == "FIELD":
            if "." not in value:
                return [[f"{value}_{i}"] for i in range(1, settings.ORDER+1)]
            f, m = value.split(".")
            fields = self.modifier_map[m](f)
            return [[f"{f}_{i}" if f != "ERR" else "False" for f in fields] for i in range(1, settings.ORDER+1)]
        elif type == "NUMBER":
            num = [["False"] for i in range(1, int(value))]
            num.append(["True"])
            return num
        elif type == "OPERATOR":
            return self.operator_map[value]
        elif type == "COMPARISON":
            return self.comparison_map[value]
        elif type == "PREFIX":
            return self.prefix_map[value]

    comparison_map = {
        "=": EQ,
        "<": LT,
        ">": GT,
        "<=": LEQ,
        ">=": GEQ,
        "!=": NEQ
    }

    operator_map = {
        "+": ADD,
        "-": SUB,
        "*": MULT,
        "|": OR
    }

    modifier_map = {
        "north": NORTH,
        "south": SOUTH,
        "east": EAST,
        "west": WEST,
        "horizontal": HORIZONTAL,
        "vertical": VERTICAL,
        "ortho": ORTHO,
        "ne": NE,
        "nw": NW,
        "se": SE,
        "sw": SW,
        "any": ANY
    }

    prefix_map = {
        "!!": DISTINCT
    }
