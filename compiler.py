from lark import Tree
from operators import ADD, SUB, OR
from comparators import EQ, NEQ, LT, LEQ, GT, GEQ


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

        elif type == "proposition":
            left, comparison, right = [self.visit(child) for child in children]
            return comparison(left, right)

        elif type == "expression":
            if len(children) == 1:
                return self.visit(children[0])
            left, operator, right = [self.visit(child) for child in children]
            return operator(left, right)

        elif type == "FIELD":
            return [[f"{value}{i}"] for i in range(1, 10)]
        elif type == "NUMBER":
            return [["True"] if i == int(value) else ["False"] for i in range(1, 10)]
        elif type == "OPERATOR":
            return self.operator_map[value]
        elif type == "COMPARISON":
            return self.comparison_map[value]

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
