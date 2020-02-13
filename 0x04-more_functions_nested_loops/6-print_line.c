#include "holberton.h"

/**
 * print_line - function that drwas a straight line in the terminal
 *
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int sl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sl = 1; sl <= n; sl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
