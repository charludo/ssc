import os
import re
import subprocess
from src import settings


def solve(path, tex):
    limboole = os.environ["limboole"]
    satisfiable = True
    i = 0
    while satisfiable:
        p = subprocess.Popen(f"{limboole} -s {path}", stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, shell=True)
        (output, error) = p.communicate()
        p.wait()

        if "UNSATISFIABLE formula" in str(output):
            satisfiable = False
            continue

        solution, prefills = extract_solution(str(output))
        i += 1
        print(f"Solution #{i}:")
        if tex:
            texify(solution)
        else:
            prettify(solution)

        prefills = f" & !({' & '.join(prefills)})"
        with open(path, "a") as file:
            file.write(prefills)

    if i == 0:
        print("Sudoku is unsatisfiable.")
    elif i == 1:
        print("Sudoku is uniquely solvable. No further solutions exist.")
    else:
        print(f"No further solutions exist. Total number of solutions: {i}")


def solve_test():
    limboole = os.environ["limboole"]
    path = os.environ["outpath"]
    p = subprocess.Popen(f"{limboole} -s {path}", stdout=subprocess.PIPE, shell=True)
    (output, error) = p.communicate()
    p.wait()

    solution, prefills = extract_solution(str(output))


def extract_solution(output):
    output = output.replace(r"\n", "\n")
    solution = ["."] * settings.ORDER**2
    prefills = []

    matches = re.finditer(r"(?P<i>[a-z]+)(?P<j>\d+)_(?P<k>\d+) = 1", output, re.MULTILINE)
    for match in matches:
        i = match.group("i")
        j = int(match.group("j"))
        k = match.group("k")
        solution[(j - 1) + (settings.rows.index(i)) * settings.ORDER] = k
        prefills.append(f"{i}{j}_{k}")

    return solution, prefills


def texify(solution):
    solution = [solution[i::9] for i in range(9)]
    for s in solution:
        print("|" + "|".join(s) + "|")
    print()


def prettify(solution):
    c = 1 if settings.ORDER < 10 else 2
    order = int(settings.ORDER**(.5))
    header = "     " + " | ".join(["-".join(["-" * c] * order)] * order)
    print()
    print(header)

    for i in range(settings.ORDER):
        line = solution[i*settings.ORDER:(i+1)*settings.ORDER]
        offset = 0
        line = [x if len(x) == c else f" {x}" for x in line]
        for j in range(1, settings.ORDER):
            if j % order == 0:
                line.insert(j+offset, " ")
                offset += 1
        line = " ".join(line)
        print(f"   | {line}")

        if i in [j for j in range(settings.ORDER - 1) if (j + 1) % order == 0]:
            print("   -")
    print()
