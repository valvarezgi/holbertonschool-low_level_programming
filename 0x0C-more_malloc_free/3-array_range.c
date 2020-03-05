#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the newly array
 */

int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min + 1);
	p = malloc(sizeof(*p) * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
