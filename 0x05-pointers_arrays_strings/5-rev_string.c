#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int index;

	while (s[counter] != '\0')
		counter++;

	for (index = 0; index < counter; index++)
	{
		counter--;
		reverse = s[index];
		s[index] = s[counter];
		s[counter] = reverse;
	}
}
