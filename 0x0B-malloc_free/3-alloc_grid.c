#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to s 2 dimensional array of int
 * @width: width of the array
 * @height: height of the array
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int *p;
	int **dp;

	if (width < 1 || height < 1)
		return (NULL);
	dp = malloc(sizeof(int *) * height);
	if (dp != NULL)
	{
		for (h = 0; h < height; h++)
		{
			p = malloc((sizeof(int) * width));
			if (p != NULL)
			{
				dp[h] = p;
				for (w = 0; w < width; w++)
				{
					p[w] = 0;
				}
			}

			else
			{
				h--;
				while (h >= 0)
				{
					free(dp[h]);
					h--;
				}
				free(dp);
				return (NULL);
			}
		}
	}
	return (dp);
}
