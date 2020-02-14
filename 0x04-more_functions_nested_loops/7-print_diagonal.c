#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int bs;
	int s;

	if (n > 0)
	{
		while (a < n);
		{
			while (b < a)
		{
			_putchar(' ');
			b++;
		}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar ('\n');
}
