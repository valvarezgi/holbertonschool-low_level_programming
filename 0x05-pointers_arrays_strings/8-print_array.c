#include <stdio.h>
#include "holberton.h"
/**
 * print_array - function that prints n elements of an array
 * @a: array
 * @n: is the number of elements
 */

void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < (n - 1); ind++)
		printf("%d, ", a[ind]);

			if (ind == (n - 1))
				printf("%d", a[n - 1]);
	printf("\n");
}
