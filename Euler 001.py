#!/bin/python3

import math
import os
import random
import re
import sys

def sum_of_multiples_of(k,n): 
    count = (n - 1) // k 
    return k * count * (count + 1) // 2



if __name__ == '__main__':
    t = int(input().strip())       
    for t_itr in range(t):
        n = int(input().strip())
        print(sum_of_multiples_of(3,n) + sum_of_multiples_of(5,n) - sum_of_multiples_of(15,n))
