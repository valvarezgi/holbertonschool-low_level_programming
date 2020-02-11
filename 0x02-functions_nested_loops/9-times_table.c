#include "holberton.h"
/*
 * times_table - function tht prints the 9 times table
 * starting with 0
 *
 */

void times_table(void)
{
	int a, b, c, d;
	a = 0;
	while (a < 10)
	{
		_putchar('0');
		b = 1;
		while (b < 10)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b, t = c / 10;
			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(d + '0');
				_putchar(c % 10 + '0')
					}
			b++;
		}
		putchar('\n');
		a++;
	}
}
