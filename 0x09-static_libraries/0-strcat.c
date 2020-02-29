#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: a pointer to the result string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; (dest[i] != '\0'); i++)
	;

	j = 0;

	while (src[j] != '\0')

	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);

}
