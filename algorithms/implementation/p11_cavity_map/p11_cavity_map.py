#!/bin/python3

from __future__ import print_function

import sys


n = int(input().strip())
grid = []
grid_2 = []

for grid_i in range(n):
    grid_t = list(str(input().strip()))
    grid.append(grid_t)
    grid_2.append(grid_t)
    
# For non-edge cell, if the surrounding digits are lower, mark X
for i in range(1, n - 1):
    for j in range(1, len(grid[i]) - 1):
        if (grid[i-1][j] < grid[i][j]) and (grid[i+1][j] < grid[i][j]) and (grid[i][j-1] < grid[i][j]) and (grid[i][j+1] < grid[i][j]):
            grid_2[i][j] = 'X'
            
# Print from grid_2    
for i in range(n):
    for j in range(len(grid_2[i])):
        print(str(grid_2[i][j]), end="")
    print()
