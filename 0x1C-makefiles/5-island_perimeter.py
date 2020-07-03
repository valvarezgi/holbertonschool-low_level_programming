#!/usr/bin/python3
"""Module for find the perimeter of an island"""


def island_perimeter(grid):
        """Finds the perimeter"""
        numb = 0
        for x in range(len(grid)):
                for y in range(len(grid[x])):
                        if grid[x][y] == 1:
                                if x < len(grid) - 1 and grid[x + 1][y]:
                                        numb += 1
                                if x > 0 and grid[x - 1][y]:
                                        numb += 1
                                if y < len(grid[x]) - 1 and grid[x][y + 1]:
                                        numb += 1
                                if y > 0 and grid[x][y - 1]:
                                        numb += 1
                                numb -= 4
        numb = numb * - 1
        return numb
