#include "holberton.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 *
 *@c: is a character
 *
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
