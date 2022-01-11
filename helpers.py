import re
from itertools import product
import settings


def is_atomic(clause):
    if isinstance(clause, list):
        return False
    if "&" in clause or "|" in clause:
        return False
    return True


def make_atomic(clause):
    clause.replace("(", "")
    clause.replace(")", "")
    clause = re.sub(r"\s", "", clause)
    atoms = re.split(r"&|\|", clause)
    return atoms


def deconstruct(atom):
    v_l = len(re.sub('[^0-9]', '', atom)) // 2
    r_l = len(re.sub('[0-9]', '', atom))
    row = atom[:r_l]
    col = atom[r_l:r_l+v_l]
    val = atom[-v_l:]
    return row, col, val


def is_allowed(left, right):
    atoms_l = make_atomic(left)
    atoms_r = make_atomic(right)

    for a_l in atoms_l:
        row, col, val = deconstruct(a_l)
        for a in atoms_r:
            r, c, v = deconstruct(a)
            if (row == r and val == v) or \
               (col == c and val == v) or \
               (row == r and col == c and val != v):
                return False
    return True


def and_clause(left, right):
    if not isinstance(left, list):
        left = [left]
    if not isinstance(right, list):
        right = [right]
    variants = list(product(range(len(left)), range(len(right))))
    finished = []
    for v in variants:
        variant = [left[v[0]], right[v[1]]]
        if "False" in variant:
            variant = ["False"]
        elif "True" in variant:
            variant.remove("True")
        elif not is_allowed(*variant):
            continue
        if len(variant) > 1:
            finished.append(" & ".join(variant))
        else:
            finished.append(variant[0])
    return list(set(finished))


def simple_and(ks):
    ks = set(ks)
    ks.discard("True")
    if not len(ks):
        return "True"
    ks = list(ks)
    if len(ks) > 1:
        return " & ".join(ks)
    return ks[0]


def or_clause(ks):
    if len(ks):
        ks = list(set(ks))
        if "False" in ks:
            ks.remove("False")
        return " | ".join(["(" + k + ")" if not is_atomic(k) and not k[0] == "(" else k for k in ks])
    return "ERR"


def grouped(clause):
    if is_atomic(clause):
        return clause
    return f"({clause})" if len(clause) else None


def new_buffer():
    return [[] for _ in range(settings.ORDER)]
