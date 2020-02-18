#include "holberton.h"

/**
 * swap_int - functions that swaps the values of two integers
 * @a: is an integer
 * @b: is an integer
*/

void swap_int (int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
