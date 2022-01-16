import click
from lark import Lark
from pathlib import Path
from humanize import naturalsize
from os.path import join, dirname, getsize
from src.compiler import Compiler
from src.interpreter import solve
from src.base_rules import get_base_rules
from src.helpers import reduce


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
    propositions = reduce(propositions)

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

    print("done compiling.")
    print("compiled file size: ", naturalsize(getsize(outpath)))

    if interpret:
        solve(outpath)


if __name__ == "__main__":
    run()
