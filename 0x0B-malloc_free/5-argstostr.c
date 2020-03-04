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
	int i, j, counter;
	char *p, *start;

	if (ac == 0 || av == NULL)
		return (NULL);

	for(i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			counter++;
		}
		counter++;
	}
	counter++;
	p = malloc(sizeof(char) * counter);
	if (p == NULL)
		return (NULL);
	start = p;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while(av[i][j] != '\0')
		{
			*p = av[i][j];
			j++;
			p++;
		}
		*p = '\n';
		p++;
	}
	return(start);
}
