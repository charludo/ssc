import os
import re
import subprocess
from src import settings


def solve(path):
    satisfiable = True
    base = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))
    p = subprocess.Popen(os.path.join(base, f"limboole1.2/limboole -s {path}"), stdout=subprocess.PIPE, shell=True)
    (output, error) = p.communicate()
    p.wait()

    if "UNSATISFIABLE formula" in str(output):
        satisfiable = False
        print("UNSATISFIABLE")
        return

    solution, prefills = extract_solution(str(output))
    prettify(solution)


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