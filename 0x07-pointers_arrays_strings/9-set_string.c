#include "holberton.h"

/**
 *set_string - function that sets the value of a pointer to a char
 * @s : double pointer to set
 * @to: the char to point to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
