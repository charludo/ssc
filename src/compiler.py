from src import settings
from lark import Tree
from src.operators import ADD, SUB, MULT, OR
from src.comparators import EQ, NEQ, LT, LEQ, GT, GEQ, POR
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
                truths.extend(truth)
            # print(truths)
            return truths

        elif type == "ORDER":
            settings.ORDER = int(value)**2
            settings.renew_grid()
            return [[["True"]]]

        elif type == "proposition":
            left, comparison, right = [self.visit(child) for child in children]
            results = []
            for i in left:
                for j in right:
                    results.append(comparison(i, j))
            return results

        elif type == "builtin":
            builtin, *args = [self.visit(child) for child in children]
            return builtin(args)

        elif type == "expression":
            if len(children) == 1:
                return self.visit(children[0])
            left, operator, right = [self.visit(child) for child in children]
            results = []
            for i in left:
                for j in right:
                    results.append(operator(i, j))
            return results

        elif type == "list":
            values = []
            for child in children:
                values.extend(self.visit(child))
            return values

        elif type == "CELL":
            if "." not in value:
                return [[[f"{value}_{i}"] for i in range(1, settings.ORDER+1)]]
            f, m = value.split(".")
            fields = self.modifier_map[m](f)
            return [[[f"{f}_{i}" if f != "ERR" else "False" for f in fields] for i in range(1, settings.ORDER+1)]]
        elif type == "NUMBER":
            num = [["False"] for i in range(1, int(value))]
            num.append(["True"])
            return [num]
        elif type == "OPERATOR":
            return self.operator_map[value]
        elif type == "COMPARATOR":
            return self.comparison_map[value]
        elif type == "PREFIX":
            return self.prefix_map[value]

    comparison_map = {
        "=": EQ,
        "<": LT,
        ">": GT,
        "<=": LEQ,
        ">=": GEQ,
        "!=": NEQ,
        "||": POR
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
