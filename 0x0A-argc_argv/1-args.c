#include <stdio.h>
/**
 * main - function that prints number of arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return: the name of the function
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);


}
