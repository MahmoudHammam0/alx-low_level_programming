#!/usr/bin/python3
'''Island Perimeter module'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    res = 0
    land = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                res += 4
                if i != 0 and grid[i - 1][j] == 1:
                    land += 1
                if j != 0 and grid[i][j - 1] == 1:
                    land += 1
    return res - (land * 2)
