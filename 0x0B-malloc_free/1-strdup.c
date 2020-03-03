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
	char *pstr;
	unsigned int i = 0;

	if (str == 0)
		return (0);

	while (str[i] != 0)
		i++;
	i++;
	pstr = (malloc(sizeof(char) * i));
		for (i = 0; str[i] != 0; i++)
			pstr[i] = str[i];
	pstr[i] = 0;
	return (pstr);
}
