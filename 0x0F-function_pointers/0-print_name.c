#include <stdio.h>
#include "function_pointers.h"

 /**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: function to call to print the name
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\n' && f != NULL)
		(*f)(name);
}
