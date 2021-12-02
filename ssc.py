from tree_sitter import Language, Parser
from compiler import Compiler
from sys import argv


def get_parse_tree(code):
    Language.build_library(
        "build/sudoku.so",
        ["/home/charlotte/bachelorarbeit/tree-sitter-sudoku"]
    )
    SUDOKU_LANGUAGE = Language("build/sudoku.so", "sudoku")

    parser = Parser()
    parser.set_language(SUDOKU_LANGUAGE)

    tree = parser.parse(code)
    return tree

# print(c.node, code[c.node.start_byte:c.node.end_byte])


if __name__ == "__main__":
    with open(argv[1], "r") as file:
        code = bytes(file.read(), "utf8")

    tree = get_parse_tree(code)

    compiler = Compiler(code, tree)
