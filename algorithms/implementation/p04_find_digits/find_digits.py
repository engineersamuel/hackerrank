#!/bin/python3

import sys

def to_arr(num):
    arr = []
    while num != 0:
        arr.append(num % 10)
        num = int(num / 10)
    arr.reverse()
    return arr

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    arr = to_arr(n)
    num_div = 0
    for i in range(0, len(arr)):
        if (arr[i] != 0) and (n % arr[i] == 0):
            num_div += 1
    print(num_div)            
