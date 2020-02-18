#include "holberton.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: sis a string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
