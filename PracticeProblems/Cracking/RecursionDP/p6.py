hanoiCounter = 0
def h( fst,snd,thrd, height):
    global hanoiCounter
    hanoiCounter += 1
    show(fst,snd,thrd)    
    if height == 1:
        assert len(thrd) == 0 or fst[-1] < thrd[-1]
        thrd.append(fst.pop())
    else:
        h(fst,thrd,snd,height - 1)  # Move height-1 tower to snd
        thrd.append(fst.pop())
        h(snd,fst,thrd, height - 1) # Move snd tower to thrd

def show(s,m,l):
    print "s|",
    print ",".join([str(x) for x in s])
    print "m|",
    print ",".join([str(x) for x in m])
    print "l|",
    print ",".join([str(x) for x in l])
    print

def test(n=1):
    global hanoiCounter
    hanoiCounter = 0
    a = range(n)[::-1]
    b = []
    c = []
    h(a,b,c,n)
    print "hanoiCounter = ", hanoiCounter
    assert c == range(n)[::-1]
