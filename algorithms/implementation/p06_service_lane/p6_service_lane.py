#!/bin/python3

import sys


n,t = input().strip().split(' ')
n,t = [int(n),int(t)]
width = [int(width_temp) for width_temp in input().strip().split(' ')]
for a0 in range(t):
    i,j = input().strip().split(' ')
    i,j = [int(i),int(j)]
    
    min_width = width[i]
    for x in range(i + 1, j + 1):
        if width[x] < min_width:
            min_width = width[x]
    print(min_width)
