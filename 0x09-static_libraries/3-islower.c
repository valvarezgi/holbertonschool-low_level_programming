#include "holberton.h"
/**
 * _islower - checks for lowercase character.
 * @c: is the character to evaluate
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
