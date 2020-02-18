#include "holberton.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is a string
*/

int _strlen(char * s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
