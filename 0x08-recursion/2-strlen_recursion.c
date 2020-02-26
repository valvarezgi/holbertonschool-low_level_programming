#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to size
 * Return: 0 or the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
