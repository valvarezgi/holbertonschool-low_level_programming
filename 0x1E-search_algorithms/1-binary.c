#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if value is not in the array or its NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, middle = 0, end = 0, i;

	if (!array || !size)
		return (-1);

	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end]);
		middle = (start + end) / 2;

		if (array[middle] < value)
		{
			start = middle + 1;
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
