#!/bin/python3

import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    h = 1
    for i in range(1, n+1):
        # In the Spring *2
        if i % 2 != 0:
            h *= 2
        # In the Summer +2
        else:
            h += 1
    print(h)
