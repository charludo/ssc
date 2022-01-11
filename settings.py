ORDER = 9


def renew_grid():
    global rows
    global cols
    rows = [chr(i+97) if i < 26 else chr(i//26 + 96) + chr((i % 26) + 97) for i in range(ORDER)]
    cols = [str(i+1) for i in range(ORDER)]


renew_grid()
