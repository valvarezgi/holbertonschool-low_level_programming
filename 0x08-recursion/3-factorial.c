#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: given number
 * Return: if n is lower than 0 returns -1  otherwise returns the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
