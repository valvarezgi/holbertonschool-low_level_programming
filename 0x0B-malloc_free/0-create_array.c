#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function that creates an array of chars
 * @c: char that initializes the array
 * @size: size of the array
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ps;
	unsigned int i;
	
	ps = malloc(sizeof (char) * size);
	for (i = 0; i < size; i++)
		ps[i] = c;
	ps[i] = 0;
	return (size < 1 ? 0 : ps);
}
