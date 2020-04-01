#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: Content of the file
 * Return: 1 on success otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t cant;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd <= -1)
		return (-1);

	while (text_content != NULL && *text_content != '\0')
	{
		cant = write(fd, text_content, 1);
		if (cant < 1)
			return (-1);
		text_content++;
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
