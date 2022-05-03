#include "main.h"

/**
 * _strlen - get length of string
 * @string: string
 *
 * Return: length
 */
ssize_t _strlen(char *string)
{
	ssize_t i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - create file
 * @filename: name to create
 * @text_content: contents to write
 *
 * Return: success/failure code
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t result = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	result = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (result < 0)
		return (-1);
	return (1);
}
