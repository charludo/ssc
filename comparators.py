from helpers import and_clause, simple_and, or_clause, grouped


def range_group(field, min, max):
    return grouped(or_clause([f"{field}{i}" for i in range(min, max)]))


def EQ(left, right):
    options = []
    for i in range(len(left)):
        for term in right[i]:
            if term != "False":
                options.append(simple_and([left[i][0], term]))
    return grouped(or_clause(options))


def NEQ(left, right):
    return "!" + EQ(left, right)


def LT(field, value_map, offset=0):
    field = field["name"]

    if isinstance(value_map, dict) and value_map["name"] == "num":
        return range_group(field, 1, value_map["value"]+offset)
    elif isinstance(value_map, dict):
        right_name = value_map["name"]
        values = value_map["value"]
        return grouped(or_clause([f"({range_group(field, 1, i+offset)} & {right_name}{i})" for i in values]))

    const, names, combs = value_map

    if const:
        return f"{field}{const}"

    options = []
    # outer loop: values the field can have
    for fv in range(9):
        # middle loop: value tuples that fit the current value of the outer loop
        o_vals = []
        for tuple in combs[fv]:
            # inner loop: assign values from the tuple to the fieldnames
            t_vals = [range_group(field, 1, fv+1+offset)]
            for i in range(len(names)):
                t_vals.append(f"{names[i]}{tuple[i]}")
            o_vals.append(grouped(and_clause(t_vals)))
        if len(o_vals):
            options.append(or_clause(o_vals))
    return(grouped(or_clause(options)))


def LEQ(field, value_map):
    return LT(field, value_map, offset=1)


def GT(field, value_map, offset=1):
    field = field["name"]

    if isinstance(value_map, dict) and value_map["name"] == "num":
        return range_group(field, value_map["value"]+offset, 10)
    elif isinstance(value_map, dict):
        right_name = value_map["name"]
        values = value_map["value"]
        return grouped(or_clause([f"({range_group(field, i+offset, 10)} & {right_name}{i})" for i in values]))

    const, names, combs = value_map

    if const:
        return f"{field}{const}"

    options = []
    # outer loop: values the field can have
    for fv in range(9):
        # middle loop: value tuples that fit the current value of the outer loop
        o_vals = []
        for tuple in combs[fv]:
            # inner loop: assign values from the tuple to the fieldnames
            t_vals = [range_group(field, fv+1+offset, 10)]
            for i in range(len(names)):
                t_vals.append(f"{names[i]}{tuple[i]}")
            o_vals.append(grouped(and_clause(t_vals)))
        if len(o_vals):
            options.append(or_clause(o_vals))
    return(grouped(or_clause(options)))


def GEQ(field, value_map):
    return GT(field, value_map, offset=0)
