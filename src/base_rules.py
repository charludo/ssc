from src import settings


def and_clause(ks):
    return " & ".join(ks)


def or_clause(ks):
    return " | ".join(ks)


def grouped(clause):
    return f"({clause})" if len(clause) else None


def get_base_rules():
    global ks
    global rows
    global cols
    global order
    ks = range(1, settings.ORDER+1)
    rows = settings.rows
    cols = settings.cols
    order = int(settings.ORDER**(.5))

    rs = and_clause([row(i) for i in rows])
    columns = and_clause([column(j) for j in cols])
    areas = and_clause([area(a) for a in ks])
    base_rules = and_clause([number_everywhere(), no_double_entries(), rs, columns, areas])
    return base_rules


def number_everywhere():
    return and_clause([grouped(or_clause([f"{i}{j}_{k}" for k in ks])) for i in rows for j in cols])


def no_double_entries():
    return and_clause([grouped(and_clause([f"(!{i}{j}_{k1} | !{i}{j}_{k2})" for k1 in ks for k2 in ks if k1 < k2])) for i in rows for j in cols])


def row(i):
    return and_clause([grouped(and_clause([f"(!{i}{j1}_{k} | !{i}{j2}_{k})" for k in ks])) for j1 in cols for j2 in cols if j1 < j2])


def column(j):
    return and_clause([grouped(and_clause([f"(!{i1}{j}_{k} | !{i2}{j}_{k})" for k in ks])) for i1 in rows for i2 in rows if i1 < i2])


def area(a):
    """
    area numbering scheme:
        1   2   3
        4   5   6
        7   8   9
    1 -> i=1, j=1
    2 -> i=1, j=4
    3 -> i=1, j=7

    4 -> i=4, j=1
    5 -> i=4, j=4
    6 -> i=4, j=7

    7 -> i=7, j=1
    8 -> i=7, j=4
    9 -> i=7, j=7
    """
    i_start = ((a - 1) // order) * order + 1
    j_start = ((a - 1) % order) * order + 1
    iv = range(i_start, i_start + order)
    jv = range(j_start, j_start + order)

    positions = [f"{rows[i-1]}{j}" for i in iv for j in jv]

    return and_clause([grouped(and_clause([f"(!{p1}_{k} | !{p2}_{k})" for k in ks])) for p1 in positions for p2 in positions if p1 != p2])
