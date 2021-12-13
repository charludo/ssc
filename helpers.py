from itertools import product


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
            finished.append("(" + " & ".join(variant) + ")")
        else:
            finished.append(variant[0])
    return list(set(finished))


def simple_and(ks):
    ks = set(ks)
    ks.discard("True")
    ks = list(ks)
    if len(ks) > 1:
        return "(" + " & ".join(ks) + ")"
    return ks[0]


def or_clause(ks):
    return " | ".join(ks) if len(ks) else "ERR"


def grouped(clause):
    if len(clause) == 1:
        return clause[0]
    return f"({clause})" if len(clause) else None
