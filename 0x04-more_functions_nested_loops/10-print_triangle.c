#include "holberton.h"

/*
 * print_triangle - function that prints a triangle
 *
 * @size - triangle size
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b != size && b <= size - a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
