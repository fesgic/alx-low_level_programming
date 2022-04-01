#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
	printf("%d\n", mul);

	return (0);
}
