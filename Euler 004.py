import math
import os
import random
import re
import sys
import bisect


if __name__ == '__main__':
    t = int(input().strip())
    pal = []
    for i in range(100,1000):
        for j in range(100,1000):
            x = str(i*j)
            if x == x[::-1]:
                pal.append(i*j)
    pal.sort()
    for t_itr in range(t):
        n = int(input().strip())
        print (pal[bisect.bisect_left(pal, n)-1])
        