from helpers import simple_and, or_clause, grouped


def left_range(left, min, max):
    return grouped(or_clause([left[i][0] for i in range(min, max)]))


def EQ(left, right):
    options = []
    for i in range(len(left)):
        for term in right[i]:
            if term != "False":
                options.append(simple_and([left[i][0], term]))
    return grouped(or_clause(options))


def NEQ(left, right):
    return "!" + EQ(left, right)


def LT(left, right, offset=0):
    options = []
    for i in range(len(left)):
        for term in right[i]:
            if term != "False":
                options.append(simple_and([left_range(left, 0, i+offset), term]))
    return grouped(or_clause(options))


def LEQ(left, right):
    return LT(left, right, offset=1)


def GT(left, right, offset=1):
    options = []
    for i in range(len(left)):
        for term in right[i]:
            if term != "False":
                options.append(simple_and([left_range(left, i+offset, 9), term]))
    return grouped(or_clause(options))


def GEQ(left, right):
    return GT(left, right, offset=0)
