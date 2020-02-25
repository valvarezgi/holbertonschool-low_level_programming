#include "holberton.h"
/**
 * _sqrt_recursion - functions that returns the natural square root of a number
 * @n: number to evaluate
 * Return: -1 if n doesn't have square root, otherwise returns the base
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (n);

	return (findSquare(n, 1));
}

/**
 * findSquare - Find the natural square root of a number
 * @n: number to determinate root
 * @i: number to find the base
 * Return: -1 if the square root doesn't exist, otherwise, returns the root
 */

int findSquare(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (findSquare(n, i + 1));
}
