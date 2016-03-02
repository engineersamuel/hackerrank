#!/bin/python3

import sys
from math import ceil, floor, sqrt

t = int(input().strip())
for a0 in range(t):
    temp = input().split(" ")
    beginCeil = int(ceil(sqrt(int(temp[0]))))
    endFloor = int(floor(sqrt(int(temp[1]))))
    print(endFloor - beginCeil + 1)
