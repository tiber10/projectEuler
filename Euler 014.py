N = 5000000
ans = [0] * (N + 1)
res = [0] * (N + 1)
ans[1] = 0
res[1] = 1

for i in range(2, N + 1):
    x = i
    count = 0
    while x > 1:
        if x < i:
            ans[i] = count + ans[int(x)]
            break
        if x % 2 == 0:
            x = x // 2
            count += 1
        else:
            x = 3 * x + 1
            count += 1
    else:
        ans[i] = count

cm = 1
ci = 1
for i in range(2, N + 1):
    if ans[i] >= cm:
        cm = ans[i]
        ci = i
    res[i] = ci

t = int(input())
for _ in range(t):
    n = int(input())
    print(res[n])
