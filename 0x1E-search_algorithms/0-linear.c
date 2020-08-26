#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using
 * the linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 is value is not present in the array or if the array is NULL
 * or the index at whixh value was found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%lu] =[%d]\n",
			       index, array[index]);
			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}
