#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: a string
¨* @src: a string
 * @n: number of bytes to use the function
 * Return: return a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i = 0;

	for (j = 0; dest[j] != '\0'; j++)
	;
	while ((src[i] != '\0') && (i < n))
	{
		dest[j + i] = src[i];
			i++;
	}
	return (dest);
}
