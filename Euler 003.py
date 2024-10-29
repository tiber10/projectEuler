#!/bin/python3

import math
import os
import random
import re
import sys

def prime(n):
    x  = math.sqrt(n)
    for i in range(2, int(x)+1):
        if n%i==0:
            return 0
    return 1

if __name__ == '__main__':
    t = int(input().strip())
    ans = -1
    for t_itr in range(t):
        n = int(input().strip())
        if prime(n):
            print(n)
        else:
            for i in range(2,int(math.sqrt(n))+1):
                if n%i==0:
                    if prime(i):
                        ans = i
                    if prime(n/i):
                        ans = n/i
            print(int(ans))