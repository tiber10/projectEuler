import math
phi = (1+math.sqrt(5))/2 

for _ in range(int(input())):
    N = int(input())
    X = math.ceil((math.log10(5)/2 + N-1) / math.log10(phi))
    print(int(X))    