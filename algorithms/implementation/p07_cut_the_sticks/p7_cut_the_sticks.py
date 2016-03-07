#!/bin/python3

import sys

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

done = False
while done is False:
    count = 0
    cutSize = 10001
    for i in range(n):
        if arr[i] > 0:
            count += 1
            cutSize = min(cutSize, arr[i])
    
    if count == 0 or cutSize == 0:
        break
    
    print(count)
    
    for i in range(n):
        arr[i] -= cutSize
