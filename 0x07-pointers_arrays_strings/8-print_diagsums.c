#include "stdio.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer
 * @size: diagonal
 */

void print_diagsums(int *a, int size)
{
	int i, suma, sumb;

	suma = sumb = 0;
	for (i = 0; i < (size * size); i += size + 1)
		suma += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumb += a[i];
	printf("%d, %d\n", suma, sumb);
}
