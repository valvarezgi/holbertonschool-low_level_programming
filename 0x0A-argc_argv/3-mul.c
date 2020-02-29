#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
