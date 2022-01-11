import re
from src import settings


def modify(func):
    def inner(field):
        row = re.sub("[^a-z]", "", field)
        col = re.sub("[a-z]", "", field)
        return func(row, col)
    return inner


@modify
def NORTH(row, col):
    if row == "a":
        return ["ERR"]
    return [settings.rows[settings.rows.index(row) - 1] + col]


@modify
def SOUTH(row, col):
    if row == settings.rows[-1]:
        return ["ERR"]
    return [settings.rows[settings.rows.index(row) + 1] + col]


@modify
def EAST(row, col):
    if col == str(settings.ORDER):
        return ["ERR"]
    return [row + settings.cols[settings.cols.index(col) + 1]]


@modify
def WEST(row, col):
    if col == settings.rows[-1]:
        return ["ERR"]
    return [row + settings.cols[settings.cols.index(col) - 1]]


@modify
def NE(row, col):
    if row == "a" or col == str(settings.ORDER):
        return ["ERR"]
    return [settings.rows[settings.rows.index(row) - 1] + settings.cols[settings.cols.index(col) + 1]]


@modify
def SE(row, col):
    if row == settings.rows[-1] or col == str(settings.ORDER):
        return ["ERR"]
    return [settings.rows[settings.rows.index(row) + 1] + settings.cols[settings.cols.index(col) + 1]]


@modify
def NW(row, col):
    if row == "a" or col == "1":
        return ["ERR"]
    return [settings.rows[settings.rows.index(row) - 1] + settings.cols[settings.cols.index(col) - 1]]


@modify
def SW(row, col):
    if row == settings.rows[-1] or col == "1":
        return ["ERR"]
    return [settings.rows[settings.rows.index(row) + 1] + settings.cols[settings.cols.index(col) - 1]]


def HORIZONTAL(field):
    return [*WEST(field), *EAST(field)]


def VERTICAL(field):
    return [*NORTH(field), *SOUTH(field)]


def ORTHO(field):
    return [*HORIZONTAL(field), *VERTICAL(field)]


def ANY(field):
    return [*HORIZONTAL(field), *VERTICAL(field), *SE(field), *NE(field), *SW(field), *NW(field)]
