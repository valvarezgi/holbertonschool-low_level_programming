#include <stdio.h>
/**
 * main - function that prints its own name
 * @argc: number of arguments
 * @argv: argument vector
 * Return: the name of the function
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
