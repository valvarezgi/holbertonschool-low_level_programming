#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
¨* Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int length1 = 0, length2 = 0, i, j;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	length1 = 0;
	while (s1[length1] != '\0')
		length1++;
	length2 = 0;
	while (s2[length2] != 0)
		length2++;
	p = malloc(sizeof(char) * (length1 + length2 + 1));
	if (p != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			p[length1 + j] = s2[j];
		}
	}
	return (p);
}
