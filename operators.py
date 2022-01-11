from itertools import product
from helpers import and_clause
import settings


def cartesian(func):
    def inner(left, right):
        cartesian_indeces = list(product(range(settings.ORDER), range(settings.ORDER)))
        value_map = func(cartesian_indeces)

        values = []
        for i in range(settings.ORDER):
            vals = []
            for pair in value_map[i]:
                vals.extend(and_clause(left[pair[0]], right[pair[1]]))
            vals[:] = [v for v in vals if v != "False"]
            vals = vals if vals else ["False"]
            values.append(vals)
        return values
    return inner


@cartesian
def ADD(options):
    legal_pairs = []
    for i in range(settings.ORDER):
        vals = []
        for pair in options:
            value = pair[0] + pair[1]
            if value+2 == i+1:
                vals.append(pair)
        legal_pairs.append(vals)
    return legal_pairs


@cartesian
def SUB(options):
    legal_pairs = []
    for i in range(settings.ORDER):
        vals = []
        for pair in options:
            value = pair[0] - pair[1]
            if value-1 == i:
                vals.append(pair)
        legal_pairs.append(vals)
    return legal_pairs


def OR(left, right):
    buffer = []
    for i in range(settings.ORDER):
        combined = set([*left[i], *right[i]])
        if len(combined) > 1:
            combined.discard("False")
        buffer.append(list(combined))
    return buffer
