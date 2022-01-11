import settings


rows = [chr(i+97) if i < 26 else chr(i//26 + 96) + chr((i % 26) + 97) for i in range(settings.ORDER)]
cols = [str(i+1) for i in range(settings.ORDER)]


def NORTH(field):
    if field[0] == "a":
        return ["ERR"]
    return [rows[rows.index(field[0]) - 1] + field[1]]


def SOUTH(field):
    if field[0] == "i":
        return ["ERR"]
    return [rows[rows.index(field[0]) + 1] + field[1]]


def EAST(field):
    if field[1] == str(settings.ORDER):
        return ["ERR"]
    return [field[0] + cols[cols.index(field[1]) + 1]]


def WEST(field):
    if field[1] == "1":
        return ["ERR"]
    return [field[0] + cols[cols.index(field[1]) - 1]]


def HORIZONTAL(field):
    return [*WEST(field), *EAST(field)]


def VERTICAL(field):
    return [*NORTH(field), *SOUTH(field)]


def ORTHO(field):
    return [*HORIZONTAL(field), *VERTICAL(field)]


def NE(field):
    if field[0] == "a" or field[1] == str(settings.ORDER):
        return ["ERR"]
    return [rows[rows.index(field[0]) - 1] + cols[cols.index(field[1]) + 1]]


def SE(field):
    if field[0] == "i" or field[1] == str(settings.ORDER):
        return ["ERR"]
    return [rows[rows.index(field[0]) + 1] + cols[cols.index(field[1]) + 1]]


def NW(field):
    if field[0] == "a" or field[1] == "1":
        return ["ERR"]
    return [rows[rows.index(field[0]) - 1] + cols[cols.index(field[1]) - 1]]


def SW(field):
    if field[0] == "i" or field[1] == "1":
        return ["ERR"]
    return [rows[rows.index(field[0]) + 1] + cols[cols.index(field[1]) - 1]]


def ANY(field):
    return [*HORIZONTAL(field), *VERTICAL(field), *SE(field), *NE(field), *SW(field), *NW(field)]
