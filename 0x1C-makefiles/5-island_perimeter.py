#!/usr/bin/python3
"""Defines the perimeter of an island."""


def island_perimeter(grid):
    """
    Return the perimiter of an island described in grid. A grid
    a list of integers 0 and 1 representing a water and land zones
    respectively

    Args:
        grid (list): a list of list of integers representing an island.
    Returns:
        the perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)

    perimtr = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimtr += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimtr -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimtr -= 2

    return perimtr
