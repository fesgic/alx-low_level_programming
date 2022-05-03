#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _read_copy(const char *file1, const char *file2);
int _read_now(int fd_f, int fd_t);

/**
 * main - entry point
 * @argc: no of arguments
 * @argv: arguments
 *
 * Return: success/error code
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	n = _read_copy(argv[1], argv[2]);
	if (n != 0)
		exit(n);
	return (n);
}

/**
 * _read_copy - get files to copy from
 * to copy to
 * @file1: copy from
 * @file2: copy to
 *
 * Return: success/error code
 */
int _read_copy(const char *file1, const char *file2)
{
	int fd_f, fd_t, cl_f, cl_t, n;

	fd_f = open(file1, O_RDONLY);
	if (fd_f < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		return (98);
	}
	fd_t = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		return (99);
	}
	n = _read_now(fd_f, fd_t);
	if (n == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		return (n);
	}
	cl_f = close(fd_f);
	if (cl_f == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_f);
		return (100);
	}
	cl_t = close(fd_t);
	if (cl_t == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_t);
		return (100);
	}
	return (n);

}

/**
 * _read_now - perfom the copy operations
 * @fd_f: file descriptor to copy from
 * @fd_t: file descriptor to copy to
 *
 * Return: success/error code
 */
int _read_now(int fd_f, int fd_t)
{
	char *buf;
	ssize_t f_Rd = 1024;

	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
	{
		return (99);
	}
	while (f_Rd == 1024)
	{
		f_Rd = read(fd_f, buf, 1024);
		write(fd_t, buf, f_Rd);
	}
	free(buf);
	return (0);
}

