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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (bs = 1; bs <= n; bs++)
		{
			for (s = 1; s < bs; bs++)
			{
				_putchar(' ');
			}
			{
			_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
