#include "holberton.h"

/**
 * print_alphabeth - prints the alphabet, in lowercase
 *
 */

void print_alphabet(void)
{
	int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

		return;
}
