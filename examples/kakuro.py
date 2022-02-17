def and_clause(ks):
    return " & ".join(ks)


def or_clause(ks):
    return " | ".join(ks)


def grouped(clause):
    return f"({clause})" if len(clause) else None

def no_double_entries():
    rows = ["a", "b", "c", "d", "e"]
    cols = [1, 2, 3, 4, 5]
    ks = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    return and_clause([grouped(and_clause([f"(!{i}{j}_{k1} | !{i}{j}_{k2})" for k1 in ks for k2 in ks if k1 < k2])) for i in rows for j in cols])

with open("kakuro-base", "w") as file:
    file.write(no_double_entries())
