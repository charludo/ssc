from helpers import and_clause, or_clause, grouped


def EQ(field, value_map):
    field = field["name"]

    if isinstance(value_map, dict) and value_map["name"] == "num":
        return f"{field}{value_map['value']}"
    elif isinstance(value_map, dict):
        right_name = value_map["name"]
        values = value_map["value"]
        return grouped(or_clause([f"({field}{i} & {right_name}{i})" for i in values]))

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
            t_vals = [f"{field}{fv+1}"]
            for i in range(len(names)):
                t_vals.append(f"{names[i]}{tuple[i]}")
            o_vals.append(grouped(and_clause(t_vals)))
        if len(o_vals):
            options.append(or_clause(o_vals))
    return(grouped(or_clause(options)))


def NEQ(field, value_map):
    return "!" + EQ(field, value_map)