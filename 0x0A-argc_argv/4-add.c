#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point, add + numbers
 * @argc: no of args
 * @argv: arguments
 *
 * Return: Success(0) else (1)
 *
 */
int main(int argc, char **argv)
{
	int sum, i;
	int b = 0;

	sum = 0;

	/* check if no arguments were passed */
	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		/* check if any character passed to arguments is not a number */
		for (b = 0; argv[i][b]; b++)
		{
			if (isdigit(argv[i][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(*(argv + i));
	}

	printf("%d\n", sum);

	return (0);
}
