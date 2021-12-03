def and_clause(ks):
    return " & ".join(ks)


def or_clause(ks):
    return " | ".join(ks) if len(ks) else "ERR"


def grouped(clause):
    return f"({clause})" if len(clause) else None
