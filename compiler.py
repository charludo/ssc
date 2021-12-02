from lark import Tree


class Compiler:
    def __init__(self, tree):
        self.tree = tree

        self.traverse(tree)

    def traverse(self, tree):
        for child in tree.children:
            if isinstance(child, Tree):
                self.traverse(child)
            else:
                print(child.type, child.value)
