from sys import argv

def dot_product(u,v):
    assert len(u) == len(v)
    return sum([u[i] * v[i] for i in range(len(u))])

def m(u,v):
    print u, v
    u = sorted(u)
    v = list(reversed(sorted(v)))
    print u, v
    return dot_product(u,v)
if __name__ == '__main__':
    with open(argv[1], 'r') as f:
        lines = f.readlines()
    N = int(lines[0])
    print "N = ", N
    s = ""
    for i in range(1, 3*N+1, 3):
        s += "Case #{}: ".format(i/3 + 1)
        u = [int(val) for val in lines[i+1].split()]
        v = [int(val) for val in lines[i+2].split()]
        s += "{}\n".format(m(u,v))

    with open('result.txt', 'w') as f:
        f.write(s)
