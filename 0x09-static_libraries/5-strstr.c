#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - function that locates a substring
 * @haystack: is a string
 * @needle: is a substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *b = haystack;
		char *p = needle;

		while (*p == *haystack && *p != '\0' && *haystack != '\0')
		{
			haystack++;
			p++;
		}
		if (*p == '\0')
			return (b);
		haystack = b + 1;
	}
	return (NULL);
}
