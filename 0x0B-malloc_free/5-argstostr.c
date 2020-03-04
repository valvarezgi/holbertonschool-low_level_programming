#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments of a program
 * @ac: argument counter
 * @av: pointer to argument vectors
 * Return: a pointer to a new sting, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for(i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;

	}
	length += ac;
	p = malloc(sizeof(char) * length + 1);
		if (p == NULL)
			return(NULL);

	for(i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		if (p[k] == '\0')
		{
			p[k++] = '\n';
		}
	}
	return(p);
}
