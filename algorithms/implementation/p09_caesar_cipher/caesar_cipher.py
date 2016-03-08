#!/bin/python3

import sys

n = int(input().strip())
s = input().strip()
k = int(input().strip())

split = list(s)
for i in range(n):

    if not split[i].isalpha():
        print(split[i], end="")
    else:
        base = 'A' if split[i].isupper() else 'a'
        val = ord(base) + (ord(split[i]) - ord(base) + k) % 26
        print(chr(val), end="")

print()
