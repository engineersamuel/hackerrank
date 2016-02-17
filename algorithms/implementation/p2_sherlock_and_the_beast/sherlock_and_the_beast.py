#!/bin/python3

import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    r = n
    # Continue to reduce the remaining number down until it is a multiple of 3
    while(r % 3 != 0): 
        r = r - 5 

    print("-1") if(r < 0) else print(r*"5" + (n-r)*"3")
