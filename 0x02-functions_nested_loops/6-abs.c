#include "holberton.h"

/**
 *_abs - function that computes the absolute value of a integer
 *
 * @a: it's a value
 *
 * Return: the value of an integer
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (0 - a);
	}
}
