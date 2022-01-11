from lark import Lark
from sys import argv
from os.path import join, dirname
from src.compiler import Compiler
from src.helpers import or_clause, grouped, simple_and


def get_parse_tree(code):
    file = open(join(dirname(__file__), "grammar.lark"), "r")
    parser = Lark(file, start="source")
    file.close()

    tree = parser.parse(code)
    return tree


def run():
    with open(argv[1], "r") as file:
        code = file.read()

    tree = get_parse_tree(code)
    compiler = Compiler(tree)

    propositions = compiler.get_propositions()
    # print(propositions)
    output = []
    for truth in propositions:
        t = []
        for option in truth:
            option = [o for o in option if "False" not in o]
            if option:
                if len(option) > 1:
                    t.append(or_clause(option))
                else:
                    t.append(or_clause(option))
        output.append(grouped(or_clause(t)))
    propositions = simple_and(output)

    print(propositions)


if __name__ == "__main__":
    run()
