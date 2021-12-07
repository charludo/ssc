def and_clause(left, right):
    variants = [[left[0], right[i]] for i in range(len(right))]
    for i in range(len(variants)):
        variant = variants[i]
        if "False" in variant:
            variant = ["False"]
        elif "True" in variant:
            variant.remove("True")
        variants[i] = " & ".join(variant)
    return list(set(variants))


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
