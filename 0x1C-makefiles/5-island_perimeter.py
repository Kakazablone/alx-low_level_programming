#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Takes a grid with an island in it and calculates the perimeter.

    Args:
        grid (matrix): Contains 1's and 0's to signify an island
                       1 for land, 0 for water
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                """Each land cell contributes 4 to the perimeter"""
                perimeter += 4

                """Check and subtract for adjacent land cells"""
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
