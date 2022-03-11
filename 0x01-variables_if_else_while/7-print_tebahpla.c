#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: success(0)
 */
int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
