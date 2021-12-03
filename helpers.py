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


def or_clause(ks):
    return " | ".join(ks) if len(ks) else "ERR"


def grouped(clause):
    return f"({clause})" if len(clause) else None
