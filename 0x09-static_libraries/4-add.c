#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>
/**
 *main - program that adds two positive numbers
 * @argc: argument counter
 * @argv: argument array
 * Return: result from adding two numbers, 1 if error, 0 if there's
 * no number in arguments\
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
