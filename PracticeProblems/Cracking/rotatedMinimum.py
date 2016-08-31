def findMin(A):
    dbg_ctr = 0
    L, H = 0, len(A) - 1
    M = (L + H) >> 1
    while True:     ## Come back to this
        dbg_ctr += 1
        if A[L] <= A[H]:    # Terminate!! Make sure this is valid
            print "iteration {}".format(dbg_ctr)
            return A[L]
        if A[L] <= A[M]:    # A[M] >= A[L] > A[H] and cannot be minimum
            L = M+1
            M = (L+H) >> 1  
        elif A[L] > A[M]:   # This can be a simple `else` statement. Written
                            # to be explicit for reasoning about algorithm
            H = M           # Not M - 1 since A[M] might be our minimum
            M = (H + L) >> 1
def rotate(A, n):
    return A[n:] + A[:n]

def main():
    A = range(100000)
    for i in range(len(A)):
        A2 = rotate(A, i)
        print i, findMin(A2)

if __name__ == '__main__':
    main()
