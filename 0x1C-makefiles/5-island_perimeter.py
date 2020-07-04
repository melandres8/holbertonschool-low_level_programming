#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """Function: that returns the perimeter
        of the island described in grid.

    Args:
        grid (int): this is a grid of
        integers

    Returns:
        per: perimeter of the island.
    """
    per = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                per = per + 4
                if y > 0 and grid[x - 1][y] == 1:
                    per = per - 2
                if x > 0 and grid[x][y - 1] == 1:
                    per = per - 2
    return per
