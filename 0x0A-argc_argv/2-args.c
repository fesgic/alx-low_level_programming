#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: no of args
 * @argv: arguments
 *
 * Return: Success (0)
 *
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
