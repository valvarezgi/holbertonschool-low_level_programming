#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory
 * @str: string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
