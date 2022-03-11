#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: success(0)
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
