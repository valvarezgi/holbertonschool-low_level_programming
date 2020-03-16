#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * _character - prints character
 * @ap: arguments
 * Return: void
 */
void _character(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * _integer - prints integer
 * @ap: arguments
 * Return: void
 */
void _integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * _float - prints float
 * @ap: arguments
 * Return: void
 */
void _float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * _string - prints string
 * @ap: arguments
 * Return: void
 */
void _string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == 0)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: is a list of types of arguments
 * @...:  arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list valist;
	tsel tselec[] = {
		{"c", _character},
		{"i", _integer},
		{"f", _float},
		{"s", _string},
		{0, 0}
	};
	char *str1 = "", *str2 = ", ";

	i = 0;

	va_start(valist, format);
	while (format != 0 && format[i] != 0)
	{
		j = 0;

		while (tselec[j].select != 0)

		{
			if (tselec[j].select[0] == format[i])
			{
				printf("%s", str1);
				tselec[j].func(valist);
				str1 = str2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
