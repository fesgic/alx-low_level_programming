#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: success(0)
 */
int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
