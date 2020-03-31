#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read
 * Return: actual number of letters if it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, n, cl;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	count = read(fd, buffer, letters);
	n = write(STDOUT_FILENO, buffer, (ssize_t)count);
	if (n == -1)
	{
		free(buffer);
		return (0);
	}
	if (count != n)
		return (0);
	free(buffer);
	cl = close(fd);
		if (cl == -1)
			return (0);
	return (n);
}
