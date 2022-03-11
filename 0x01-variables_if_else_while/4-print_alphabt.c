#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: success(0)
 */
int main(void)
{
	int n = 'a';

	for (; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
		{
			/* don nothing */
		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
