#include <stdio.h>

/**
 *  main - entry point
 *
 *  Return: success(0)
 */
int main(void)
{
	unsigned long int a, b, sum;
	int i;

	a = 0;
	b = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	sum = a + b;
	printf("%lu\n", sum);
	return (0);
}
