#include "holberton.h"

/**
 * print_last_digit - function that prints the
 * last digit of a number
 *
 * @num: is a number
 *
 * Return: last digit of a number
 */

int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	{
		ld = 0 - ld;
	}
	_putchar(ld + '0');
	return (ld);
}
