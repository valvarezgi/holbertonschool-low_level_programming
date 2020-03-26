#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: number to transform the first number
 * Return: the number needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int r = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)

		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
