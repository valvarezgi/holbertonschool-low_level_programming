#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while ((accept[j] != '\0') && (s[i] != accept[j]))
			j++;

		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
