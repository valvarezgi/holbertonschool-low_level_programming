#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: numbers separator
 * @n: number of arguments
 * @...: arguments to sum
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		va_end(ap);
		printf("\n");
	}
}
