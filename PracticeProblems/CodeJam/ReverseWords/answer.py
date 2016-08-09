from sys import argv, exit

if len(argv) == 1:
    print "No file name. Exiting"
    exit()

try:
    f = open(argv[1])
    lines = f.readlines()
except e:
    print e
    print "Error, exiting"
    exit()
f.close()
cases = int(lines[0])
s = ""
for i in range(cases):
    line = lines[i + 1][:-1].split(' ')
    print ' '.join(line)
    line.reverse()
    s += 'Case #{}: {}\n'.format(i+1, ' '.join(line))
    print s

with open('result.txt', 'w') as f:
    f.write(s)
