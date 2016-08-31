def powerSet(S):
    # Cannot do set of sets so we implement with lists.
    # Precondition: elements in s are unique
    res = [S]   # Return val
    accum = []
    setList = list(S)   # Change reference - create new list
    for i in range(len(setList)):
        ps = powerSet(setList[i+1:])
        for s in ps:
            res.append( accum + s)
        accum.append( setList[i])
    return res
