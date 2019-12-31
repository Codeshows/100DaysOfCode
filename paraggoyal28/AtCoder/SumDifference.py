INF = 10**30
def solve(n, x, d):
    if d == 0:
        if x == 0:
            return 1
        else:
            return n+1
    D = {}
    for k in range(n+1):
        l = k*x + (k-1)*k//2*d
        r = k*x + (n*k - k*(k+1)//2)*d
        c = k*x % d
        if not c in D:
            D[c] = []
        l = (l - c) // d
        r = (r - c) // d
        if l > r:
            l, r = r, l
        D[c].append((l, r))
    res = 0
    for v in D.values():
        threshold = -INF
        for l, r in sorted(v):
            l = max(l, threshold)
            res += max(0, r-l+1)
            threshold = max(threshold, r+1)
    return res
 
n, x, d = map(int, input().split())
print(solve(n, x, d))


# We have an integer sequence A of length  N, where A1=X,Ai+1=i+D(1≤i<N)holds.
# Takahashi will take some (possibly all or none) of the elements in this sequence, and Aoki 
# will take all of the others.Let  S and  T be the sum of the numbers taken by Takahashi and Aoki,
# respectively. How many possible values of S−T are there?
