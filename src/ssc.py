import click
import timeit
import subprocess
from lark import Lark
from os import environ
from pathlib import Path
from datetime import timedelta
from humanize import naturalsize
from os.path import join, dirname, getsize
from src.compiler import Compiler
from src.interpreter import solve, solve_test
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
@click.option("--limboole", "-l", help="specify and store absolute path to limboole executable", required=False, type=str)
@click.option("--minimal", "-m", help="do not append base rules", is_flag=True)
@click.option("--report", "-r", help="report on compilation and evaluation times. argument sets number of timing processes.", required=False, type=int)
@click.option("--tex", "-t", help="output solutions in LaTeX format", is_flag=True)
@click.option("--view", "-v", help="print compiled formula to console (excluding base rules)", is_flag=True)
@click.argument("filename")
def run(filename, view, tex, report, minimal, limboole, interpret, base):
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
    print("compiled file size:      ", naturalsize(getsize(outpath)))

    if limboole:
        with open(".limboole", "w") as f:
            f.write(limboole)
        environ["limboole"] = limboole
    elif report or interpret:
        try:
            with open(".limboole", "r") as f:
                environ["limboole"] = f.read()
        except FileNotFoundError:
            p = subprocess.Popen("limboole -s ''", stdout=subprocess.PIPE, shell=True)
            (output, error) = p.communicate()
            p.wait()

            if "could no read" in str(output):
                environ["limboole"] = "limboole"
            else:
                print("limboole installation not found. Specify and store custom executable path with --limboole")
                return

    if report:
        environ["outpath"] = outpath
        # print("Performing timing measurements...")
        avg = timeit.timeit(compiler.get_propositions, number=report)/report
        print("Average compile time:    ", str(timedelta(seconds=avg)))
        avg = timeit.timeit(solve_test, number=report)/report
        print("Average evaluation time: ", str(timedelta(seconds=avg)))

    if interpret:
        solve(outpath, tex)


if __name__ == "__main__":
    run()
