from itertools import product
from src.helpers import and_clause, new_buffer, equalize, reduce
from src import settings


def EQ(left, right):
    len_left = len(left)
    buffer = new_buffer(len_left)
    left, right = equalize(left, right)
    for i in range(len_left):
        options = and_clause(left[i], right[i])
        buffer[i] = options if len(options) else ["False"]
    return buffer


def NEQ(left, right):
    len_left = len(left)
    len_right = len(right)
    buffer = new_buffer(len_left)
    left, right = equalize(left, right)
    combinations = [(i, j) for i, j in product(range(len_left), range(len_right)) if i != j]
    for i, j in combinations:
        options = and_clause(left[i], right[j])
        buffer[i].extend(options if len(options) else ["False"])
    return buffer


def LT(left, right, offset=0):
    len_right = len(right)
    buffer = new_buffer(len_right)
    left, right = equalize(left, right)
    for i in range(1-offset, len_right):
        if right[i] != ["False"]:
            for j in range(0, i+offset):
                options = and_clause(left[j], right[i])
                buffer[j].extend(options if len(options) else ["False"])

    return [list(set(b)) for b in buffer]


def LEQ(left, right):
    return LT(left, right, offset=1)


def GT(left, right, offset=1):
    len_left = len(left)
    buffer = new_buffer(len_left)
    left, right = equalize(left, right)
    for i in range(0, len_left):
        if right[i] != ["False"]:
            for j in range(i+offset, settings.ORDER):
                options = and_clause(left[j], right[i])
                buffer[j].extend(options if len(options) else ["False"])

    return buffer


def GEQ(left, right):
    return GT(left, right, offset=0)


def POR(left, right):
    return [[reduce([left, right], mode="or")]]
