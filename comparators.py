from itertools import product
from helpers import and_clause, new_buffer
import settings


def EQ(left, right):
    buffer = new_buffer()
    for i in range(settings.ORDER):
        options = and_clause(left[i], right[i])
        buffer[i] = options if len(options) else ["False"]
    return buffer


def NEQ(left, right):
    buffer = new_buffer()
    combinations = [(i, j) for i, j in product(range(settings.ORDER), range(settings.ORDER)) if i != j]
    for i, j in combinations:
        options = and_clause(left[i], right[j])
        buffer[i].extend(options) if len(options) else ["False"]
    return buffer


def LT(left, right, offset=0):
    buffer = new_buffer()
    for i in range(1-offset, settings.ORDER):
        if right[i] != ["False"]:
            for j in range(0, i+offset):
                options = and_clause(left[j], right[i])
                buffer[j].extend(options) if len(options) else ["False"]

    return [list(set(b)) for b in buffer]


def LEQ(left, right):
    return LT(left, right, offset=1)


def GT(left, right, offset=1):
    buffer = new_buffer()
    for i in range(offset, settings.ORDER):
        if right[i] != ["False"]:
            for j in range(i+offset, settings.ORDER):
                options = and_clause(left[j], right[i])
                buffer[j].extend(options) if len(options) else ["False"]

    return buffer


def GEQ(left, right):
    return GT(left, right, offset=0)
