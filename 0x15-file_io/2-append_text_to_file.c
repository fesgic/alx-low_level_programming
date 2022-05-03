#include "main.h"
#include <stdio.h>

size_t _strlen(char *string);
/**
 * _strlen - get length of string
 * @string: string
 *
 * Return: length
 */
size_t _strlen(char *string)
{
	size_t i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - append text to file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: success/failure code
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t result;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 1)
		return (-1);
	result = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (result == -1)
		return (-1);
	return (1);
}
