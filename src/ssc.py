import click
from lark import Lark
from pathlib import Path
from os.path import join, dirname
from src.compiler import Compiler
from src.interpreter import solve
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
@click.option("--interpret", "-i", help="apply limboole to compiled file and display result", is_flag=True)
@click.option("--minimal", "-m", help="do not append base rules", is_flag=True)
@click.option("--view", "-v", help="print compiled formula to console (excluding base rules)", is_flag=True)
@click.argument("filename")
def run(filename, view, minimal, interpret, base):
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

    if not minimal and not base:
        propositions += " & True & !ERR & " + get_base_rules()

    if base:
        with open(base, "r") as file:
            base_rules = file.read()
        propositions += " & True & !ERR & " + base_rules

    outpath = Path(filename).stem + ".sat"
    with open(outpath, "w") as file:
        file.write(propositions)

    if interpret:
        solve(outpath)


if __name__ == "__main__":
    run()
