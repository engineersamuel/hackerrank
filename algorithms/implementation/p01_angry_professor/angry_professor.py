#!/bin/python3

import sys

t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    a = [int(a_temp) for a_temp in input().strip().split(' ')]

    onTime = 0
    for val in a:
        onTime = onTime + 1 if val <= 0 else onTime + 0;
    if onTime >= k:
        print("NO")
    else:
        print("YES")
