def rMult(a,b):
    if a == 0 or b == 0:
        return 0
    res = 0
    toAdd = rMult(a >> 1, b)  # Logical shift by a, b > 0 assumption
    res += toAdd
    res += toAdd
    if 1 & a:
        res += b
    return res


