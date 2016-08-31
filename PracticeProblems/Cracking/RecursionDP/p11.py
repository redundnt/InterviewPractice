DBG = True
indent = -1
s = ""

def count(denoms, amt):
    global indent, s
    if amt == 0:
        s += "\n"
        return 1
    indent += 1
    res = 0
    for i in range(len(denoms)):
        d = denoms[i]
        if amt >= d:
            if DBG:
                s +=  str(d)
            res += count(denoms[i:], amt - d)
    indent -= 1
    return res
