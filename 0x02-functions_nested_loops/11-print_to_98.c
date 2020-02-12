#include "holberton.h"
#include <stdlib.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a, b, c, d;

	while (n != 98)
	{
		a = abs(n), b = a / 100, c = a / 10 % 10, d = a % 10;
		if (b > 0)
		{
			a != n ? _putchar('-') : a;
			_putchar(b + '0');
			_putchar(c + '0');
			_putchar(d + '0');
		}
		else if (c > 0)
		{
			a != n ? _putchar('-') : a;
			_putchar(c + '0');
			_putchar(d + '0');
		}
		else
		{
			a != ? _putchar('-') : a;
			_putchar(d + '0');
		}
		_putchar(',');
		_putchar(' ');
		n < 98 ? n++ : n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
