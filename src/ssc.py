import click
from lark import Lark
from pathlib import Path
from os.path import join, dirname
from src.compiler import Compiler
from src.base_rules import get_base_rules
from src.helpers import or_clause, grouped, simple_and


def get_parse_tree(code):
    file = open(join(dirname(__file__), "grammar.lark"), "r")
    parser = Lark(file, start="source")
    file.close()

    tree = parser.parse(code)
    return tree


@click.command()
@click.option("--base", "-b", help="specify file from which to read base rules")
@click.option("--minimal", "-m", help="do not append base rules", is_flag=True)
@click.option("--solve", "-s", help="apply limboole to compiled file and display result")
@click.option("--view", "-v", help="print compiled formula to console (excluding base rules)", is_flag=True)
@click.argument("filename")
def run(filename, view, solve, minimal, base):
    with open(filename, "r") as file:
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

    if view:
        print(propositions)

    if not minimal:
        get_base_rules()

    with open(Path(filename).stem + ".sat", "w") as file:
        file.write(propositions)


if __name__ == "__main__":
    run()
