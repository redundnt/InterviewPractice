from sys import argv

def countStrings(s='abab',m='abababcabababcababdababc'):
    assert len(s) * len(m)
    count = 0
    c0 = s[0]
    queue = []
    furthest = -1
    i = 0
    while i < len(m) - len(s):
        if queue:
            i = queue.pop()
            if m[i:i+len(s)] == s:
                count += 1
                i = furthest
                continue
            else:
                i = furthest
                continue
