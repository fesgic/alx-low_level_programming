#include "main.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - create a file
 * @filename: file to create
 * @text_content: text to write to file
 *
 * Return: success/failure code
 */
int create_file(const char *filename, char *text_content)
{
	int fd, exist, count = 0, *text;

	while (text_content[count] != '\0')
		count++;
	count++;
	if (filename == NULL)
		return (-1);
	text = malloc(count * sizeof(char));
	if (text == NULL)
		return (-1);
	exist = access(filename, F_OK);
	if (exist == 0)
	{
		fd = open(filename, O_TRUNC | O_WRONLY);
		if (fd < 0)
		{
			free(text);
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd < 0)
		{
			free(text);
			return (-1);
		}
	}
	write(fd, text_content, count);
	close(fd);
	free(text);
	return (0);
}
