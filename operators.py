from itertools import product


def ADD(left, right):
    if left["name"] == "num" and right["name"] == "num":
        return left["value"] + right["value"], [], []
    elif left["name"] == "num":
        return None, [right["name"]], [[(i-left["value"],)] if i-left["value"] > 0 else [] for i in right["value"]]
    elif right["name"] == "num":
        return None, [left["name"]], [[(i-right["value"],)] if i-right["value"] > 0 else [] for i in left["value"]]
    else:
        const = None
        names = [left["name"], right["name"]]
        cartesian = list(product(left["value"], right["value"]))
        cartesian = [[c for c in cartesian if c[0] + c[1] == i] for i in range(1, 10)]
        return const, names, cartesian


def SUB(left, right):
    if left["name"] == "num" and right["name"] == "num":
        return left["value"] - right["value"], [], []
    elif left["name"] == "num":
        return None, [right["name"]], [[(left["value"]-i,)] if left["value"]-i > 0 else [] for i in right["value"]]
    elif right["name"] == "num":
        return None, [left["name"]], [[(i+right["value"],)] if i+right["value"] < 10 else [] for i in left["value"]]
    else:
        const = None
        names = [left["name"], right["name"]]
        cartesian = list(product(left["value"], right["value"]))
        cartesian = [[c for c in cartesian if c[0] - c[1] == i] for i in range(1, 10)]
        return const, names, cartesian
