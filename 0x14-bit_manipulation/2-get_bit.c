#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index to a bit
 * Return: the value of a bit at index or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1 ? 1 : 0);
}
