# Implement an algorithm to print all valid combinations of n pairs of
# parentheses

def parens(n):
    if n == 0:
        return ['']
    if n == 1:
        return ["()"]
    res = []
    for i in range(n):
        j = n - i - 1
        for pi in parens(i):
            for pj in parens(j):
                res.append( '(' + pi + ')' + pj )
    return res
