#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of a program
 * @ac: argument counter
 * @av: pointer to argument vectors
 * Return: a pointer to a new sting, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, length, buflen;
		char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	i = j = length = buflen = 0;
	for(i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	p = (char *)malloc(length * sizeof(char) + ac + 1);
		if (p == NULL)
			return(NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buflen++)
			p[buflen] = av[i][j];
		p[buflen] = '\n';
		buflen++;
	}
	p[buflen] = '\0';
	return(p);
}
