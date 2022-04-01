#include <stdio.h>

/**
 * main - entry point
 * @argc: no of args
 * @argv: arguments
 *
 * Return: Success (0), else (0)
 *
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", *(argv + 0));
	}

	return (0);
}