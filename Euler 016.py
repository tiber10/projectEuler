def binpow(a, b):
    if b == 0:
        return 1
    res = binpow(a, b // 2)
    if b % 2:
        return res * res * a
    else:
        return res * res

for i in range(int(input())):
    x = int(input())
    print(sum(int(digit) for digit in str(abs(binpow(2,x)))))
    