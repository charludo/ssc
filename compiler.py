class Compiler:
    def __init__(self, code, tree):
        self.code = code
        self.tree = tree

        #self.visit(tree.root_node)
        self.test()

    def read_value(self, node):
        return self.code[node.start_byte:node.end_byte].decode("utf-8")

    def read_num(self, node):
        return int(self.read_value(node))

    def visit(self, node):
        print(node)
        print(node.type, self.read_value(node))

        for child in node.children:
            if child.type:
                self.visit(child)

    def test(self):
        cursor = self.tree.walk()
        cursor.goto_first_child()
        cursor.goto_first_child()

        cursor.goto_next_sibling()
        print(cursor.node.get_named_children())
