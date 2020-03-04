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
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;
	i++;
	p = malloc(sizeof(char) * i);
		for (i = 0; str[i] != 0; i++)
			p[i] = str[i];
	p[i] = 0;
	return (p);
}
