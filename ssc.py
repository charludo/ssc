from lark import Lark
from compiler import Compiler
from sys import argv


def get_parse_tree(code):
    file = open("grammar.lark", "r")
    parser = Lark(file, start="proposition")
    file.close()

    tree = parser.parse(code)
    return tree


if __name__ == "__main__":
    with open(argv[1], "r") as file:
        code = file.read()

    tree = get_parse_tree(code)
    compiler = Compiler(tree)
