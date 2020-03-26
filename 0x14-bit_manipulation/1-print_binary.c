#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert
 */



void print_binary(unsigned long int n)
{
	int i, aux;

	if (n == 0)
		_putchar('0');

	for (aux = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			aux = 1;
		if (aux == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
