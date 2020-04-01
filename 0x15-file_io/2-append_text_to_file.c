#include "holberton.h"
/**
 * append_text_to_file - function that appends text at
 * the end of the file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t cant;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
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
