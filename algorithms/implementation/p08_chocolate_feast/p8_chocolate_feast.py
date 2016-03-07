#!/bin/python3

import sys

def exch(num, rate):
    if num // rate < 1:
        return 0
    
    return (num // rate) + exch((num // rate) + num % rate, rate)

t = int(input().strip())
for a0 in range(t):
    n,c,m = input().strip().split(' ')
    n,c,m = [int(n),int(c),int(m)]
    
    total = 0
    bought = n // c

    total += bought
    total += exch(bought, m)
    
    print(total)
