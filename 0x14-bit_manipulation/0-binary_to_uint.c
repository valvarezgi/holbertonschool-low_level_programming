#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string of binaries
 * Return: decimal number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, d = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		d <<= 1;
		if (b[i] == '1')
			d ^= 1;
		i++;
	}
	return (d);
}
