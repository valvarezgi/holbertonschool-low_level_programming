#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: is a single character
 * Return: 1 if is greather than zero
 * 0 if is zero and -1 if is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
	return (-1);
	}
}
