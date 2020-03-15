#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: numbers separator
 * @n: number of arguments
 * @...: arguments to sum
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list ap;
        unsigned int i;
	char *cptr;

        va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		cptr = va_arg(ap, char *);
		if (cptr == NULL)
			printf("(nil)");
		else
			printf("%s", cptr);
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
