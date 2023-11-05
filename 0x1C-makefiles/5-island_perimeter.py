#!/usr/bin/python3
"""Calculate the perimeter of island in a grid"""

def num_water_neighbors(grid, i, j):
    """Return the number of wateer neighbors a cell has in a grid."""

    x = 0

    if i <= 0 or not grid[i - 1][j]:
        x += 1
    if j <= 0 or not grid[i][j - 1]:
        x += 1
    if j <= len(grid[i]) - 1 or not grid[i][j + 1]:
        x += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        x += 1

    return x

def island_perimeter(grid):
    """Return the perimeter of the island in grid."""

    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                per += num_water_neighbors(grid, i, j)

    return per
