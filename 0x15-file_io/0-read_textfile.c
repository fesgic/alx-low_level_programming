#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: file to read
 * @letters: size of buffer to read
 *
 * Return: size of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	size_t j, k;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buf = malloc(letters * sizeof(ssize_t));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	j = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, j);
	if (k != j)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return ((ssize_t)k);
}
