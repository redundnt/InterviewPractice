from sys import argv, exit

pad = [' ', '', 'abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz']

numdict = {}
for i in range(len(pad)):
    for j in range(len(pad[i])):
        numdict[pad[i][j]] = str(i)*(j+1)
s = ""

def writeword(word):
    global numdict
    s = ""        # Result
    pc = None     # Previous character
    for c in word:
        if pc and numdict[c][0] == numdict[pc][0]:
            s = s + ' '
        pc = c
        s += numdict[c]
    return s 

with open(argv[1], 'r') as f:
    lines = f.readlines()

N = int(lines[0])

for i in range(1, N+1):
    s += "Case #{}: {}\n".format(i, writeword(lines[i][:-1]))

print s
with open("result.txt", 'w') as f:
    f.write(s[:-1])
