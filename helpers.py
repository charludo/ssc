from itertools import product


def is_atomic(clause):
    if isinstance(clause, list):
        return False
    if "&" in clause or "|" in clause:
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
