from itertools import product
from src.helpers import and_clause, equalize


def operate(func):
    def inner(left, right):
        value_map, max_len = func(len(left), len(right))
        left, right = equalize(left, right)
        values = []
        for i in range(max_len):
            vals = []
            for pair in value_map[i]:
                vals.extend(and_clause(left[pair[0]], right[pair[1]]))
            vals[:] = [v for v in vals if v != "False"]
            vals = vals if vals else ["False"]
            values.append(vals)
        return values
    return inner


@operate
def ADD(left, right):
    options = list(product(range(left), range(right)))
    legal_pairs = []
    for i in range(left + right):
        vals = []
        for pair in options:
            value = pair[0] + pair[1]
            if value+1 == i:
                vals.append(pair)
        legal_pairs.append(vals)
    return legal_pairs, left+right


@operate
def SUB(left, right):
    options = list(product(range(left), range(left)))
    legal_pairs = []
    for i in range(left):
        vals = []
        for pair in options:
            value = pair[0] - pair[1]
            if value-1 == i:
                vals.append(pair)
        legal_pairs.append(vals)
    return legal_pairs, left


@operate
def MULT(left, right):
    options = list(product(range(left), range(right)))
    legal_pairs = []
    for i in range(left * right):
        vals = []
        for pair in options:
            value = (pair[0]+1) * (pair[1]+1)
            if value == i+1:
                # print(i-1, pair[0]+1, pair[1]+1)
                vals.append(pair)
        legal_pairs.append(vals)
    return legal_pairs, left*right


def OR(left, right):
    left, right = equalize(left, right)
    buffer = []
    for i in range(len(left)):
        combined = set([*left[i], *right[i]])
        if len(combined) > 1:
            combined.discard("False")
        buffer.append(list(combined))
    return buffer
