from helpers import simple_and, or_clause, grouped, and_clause
from itertools import groupby


def left_range(left, min, max):
    return grouped(or_clause([simple_and(left[i]) for i in range(min, max)]))


def EQ(left, right):
    for i in range(9):
        options = and_clause(left[i], right[i])
        left[i] = [grouped(or_clause(options))] if len(options) else ["False"]
    return left


def NEQ(left, right):
    return "!" + EQ(left, right)


def LT(left, right, offset=0):
    buffer = [[], [], [], [], [], [], [], [], []]
    for i in range(1-offset, 9):
        if right[i] != ["False"]:
            for j in range(0, i+offset):
                options = and_clause(left[j], right[i])
                buffer[j].extend(options) if len(options) else ["False"]

    return buffer


def LEQ(left, right):
    return LT(left, right, offset=1)


def GT(left, right, offset=1):
    buffer = []
    for i in range(9):
        options = and_clause(left_range(left, i+offset, 9), right[i])
        buffer.append([grouped(or_clause(options))] if len(options) else ["False"])
    return buffer


def GEQ(left, right):
    return GT(left, right, offset=0)
