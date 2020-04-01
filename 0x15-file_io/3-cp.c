#include "holberton.h"
/**
 * main - function that coies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int cantCp, cantO, cantO2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
			exit(97);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		return (-1);

	cantO = open(argv[1], O_RDONLY);
	if (cantO == -1)
	{
		free(buffer);
	  dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", argv[1]);
		   exit(98);
	}
	cantO2 = open(argv[2], O_RDWR | O_TRUNC);
	if (cantO2 == -1)
	{
		close(cantO);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
		exit(99);
	}
	(void) cantCp;

	free(buffer);
	return (0);
}
