#include "holberton.h"

/**
 * rot13 - encodes a string by rotating the characters 13 spaces.
 * @s: pointer to input string.
 * Return: Returns pointer encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boo;

	for (i = 0; s[i] != '\0'; i++)
	{
		boo = 0;
		for (j = 0; alpha[j] != '\0' && boo == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boo = 1;
			}
		}
	}
	return (s);
}
