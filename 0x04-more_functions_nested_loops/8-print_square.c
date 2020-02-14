#include "holberton.h"
/**
* print_square - function that prints a square
* @size: size of the square
* Return: 0
*/
void print_square(int size)
{
	int f;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 0; f <= size - 1; f++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
