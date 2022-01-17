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
