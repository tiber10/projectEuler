# Enter your code here. Read input from STDIN. Print output to STDOUT

def fac(n):
    if n==0: 
        return 1
    else:
        return n*fac(n-1)

t = input()
for i in range(int(t)):
    n = int(input())
    print(sum(int(digit) for digit in str(fac(n))))