# Write a function that gives every permutation of a string.
# 1. Iteratively
# 2. Recursively

def permute_recursive(s, suffix='',l=None):
    def rotate(s):
        return s[1:] + s[0]
    if l == None:
        l = []
    if len(s) == 1:
        l.append(s + suffix)
    elif len(s) == 2:
        l.append( s + suffix)
        l.append( rotate(s) + suffix)
    else:
        for c in s:
            l = permute_iter(s[:-1], s[-1] + suffix, l)
            s = rotate(s)
    return l

def permute_interative(s):
    # TODO
    pass
