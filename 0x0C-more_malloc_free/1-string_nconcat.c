#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n: number of bytes
 * Return: concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= length2)
		n = length2;
	p = malloc(sizeof(char) * (length1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
