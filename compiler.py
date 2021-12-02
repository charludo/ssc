from lark import Tree


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
            operands = [self.visit(child) for child in children]
            if len(operands) == 1:
                return operands[0]

            operator = operands[1]

            return operator(operands[0], operands[2])

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
        return f"{field} = {value_map}"

    @staticmethod
    def ADD(left, right):
        return f"{left} + {right}"

    comparison_map = {
        "=": EQ.__func__
    }

    operator_map = {
        "+": ADD.__func__
    }
