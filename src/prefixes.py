from src.helpers import new_buffer


def DISTINCT(*args):
    fields = [[v[0] for v in field] for arg in args[0] for field in arg]
    buffer = new_buffer()

    for i in range(len(fields)):
        left = fields[i]
        for j in range(i+1, len(fields)):
            right = fields[j]

            for v in range(len(left)):
                buffer[0].append(f"(!{left[v]} | !{right[v]})")

    buffer[0] = [" & ".join(buffer[0])]
    return [buffer]


def UNIQUE(*args):
    fields = [[v[0] for v in field] for arg in args[0] for field in arg]
    buffer = new_buffer()

    for field in fields:
        for v1 in range(len(field)):
            for v2 in range(v1+1, len(field)):
                buffer[0].append(f"(!{field[v1]} | !{field[v2]})")

    buffer[0] = [" & ".join(buffer[0])]
    return [buffer]
