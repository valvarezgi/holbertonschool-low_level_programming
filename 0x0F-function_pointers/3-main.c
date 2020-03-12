#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - principal function
 * @argc: arguments counter
 * @argv: array of arguments
 *Return: 0 or a number
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
	     && *argv[2] != '/' && *argv[2] != '%') || argv[2][1] != 0)
	{
		printf("Error\n");
		return (99);
	}
	if (atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
