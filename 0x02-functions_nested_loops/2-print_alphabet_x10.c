#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase ten times
 *
 */
void print_alphabet(void)
{
	int ch, r;
	r = 0;

	while (r < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	
	{
		_putchar(ch);
			      }
	r++;
	_putchar('\n');                 
}
	return;
}
