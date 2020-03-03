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
	char *pstr;
	unsigned int length1 = 0, length2 = 0, i, j;

	if (s1 == 0)
		s1 = " ";
	if (s2 == 0)
		s2 = " ";
	while (s1[length1] != 0)
		length1++;
	while (s2[length2] != 0)
		length2++;
	length2++;
	pstr = (malloc(sizeof(char) * (length1 + length2)));
			for (i = 0; i < length1; i++)
			pstr[i] = s1[i];
			for (j = 0; j < length2; i++, j++)
			pstr[i] = s2[i];
			return (pstr);
}
