#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: no of args
 * @argv: arguments
 *
 * Return: success(1)
 *
 */
int main(int argc, char **argv)
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
