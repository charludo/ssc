from lark import Tree
from helpers import and_clause
from operators import ADD, SUB
from comparators import EQ, NEQ, LT, LEQ, GT, GEQ


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

    def get_propositions(self):
        return self.visit(self.tree)

    def visit(self, node):
        if isinstance(node, Tree):
            type, value, children = node.data.value, None, node.children
        else:
            type, value, children = node.type, node.value, []

        if type == "source":
            buf = []
            for child in children:
                buf.append(self.visit(child))
            return and_clause(buf)

        elif type == "proposition":
            field = self.visit(children[0])
            comparison = self.comparison_map[self.visit(children[1])]
            value_map = self.visit(children[2])

            return comparison(field, value_map)

        elif type == "expression":
            if children[1] is None:
                return self.visit(children[0])

            left, operator, right = [self.visit(child) for child in children]

            return operator(left, right)

        elif type == "FIELD":
            return prep_value(value)
        elif type == "NUMBER":
            return prep_value(int(value))
        elif type == "OPERATOR":
            return self.operator_map[value]
        elif type == "COMPARISON":
            return value

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
        "-": SUB
    }
