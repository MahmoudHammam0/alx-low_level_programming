#!/usr/bin/python3
'''Island Perimeter module'''


def island_perimeter(grid):
    length = 0
    width = 0
    for the_list in grid:
        for i in range(len(the_list)):
            if i == 0:
                continue
            elif the_list[i] == 1:
                if the_list[i - 1] == 0:
                    length += 1
                if the_list[i + 1] == 1 or the_list[i - 1] == 1:
                    width += 1
    return (length + width) * 2
