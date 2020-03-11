#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that finds integer
 * @array: given array
 * @size: size of the given array
 * @cmp: pointer to function
 * Return: integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		value = (*cmp)(array[i]);
		if (value != 0)
		{
			return (i);
		}
	}
	return (-1);
}
