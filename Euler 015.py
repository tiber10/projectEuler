import math
for i in range(int(input())):
    n, m=map(int, input().split())
    print(math.comb(n+m, n) %(10**9+7))