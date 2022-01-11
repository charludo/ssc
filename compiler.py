import globals
from lark import Tree
from operators import ADD, SUB, OR
from comparators import EQ, NEQ, LT, LEQ, GT, GEQ
from modifiers import NORTH, SOUTH, EAST, WEST, HORIZONTAL, VERTICAL, ORTHO, NE, SE, NW, SW, ANY
from prefixes import DISTINCT


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
                truths.append(self.visit(child))
            return truths

        elif type == "ORDER":
            globals.order = int(value)**2
            return [["True"]]

        elif type == "proposition":
            left, comparison, right = [self.visit(child) for child in children]
            return comparison(left, right)

        elif type == "builtin":
            builtin, *args = [self.visit(child) for child in children]
            return builtin(args)

        elif type == "expression":
            if len(children) == 1:
                return self.visit(children[0])
            left, operator, right = [self.visit(child) for child in children]
            return operator(left, right)

        elif type == "FIELD":
            if "." not in value:
                return [[f"{value}{i}"] for i in range(1, 10)]
            f, m = value.split(".")
            fields = self.modifier_map[m](f)
            return [[f"{f}{i}" if f != "ERR" else "False" for f in fields] for i in range(1, 10)]
        elif type == "NUMBER":
            return [["True"] if i == int(value) else ["False"] for i in range(1, 10)]
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
