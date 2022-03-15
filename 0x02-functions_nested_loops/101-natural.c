#include <stdio.h>

/**
 *  main - entry point
 *
 *  Return: success(0)
 */
int main(void)
{
	int a = 0;
	int total;
	int b, c;

	for (a = 0;a < 1024;)
	{
		b = a % 3;
		if (b != 0)
		{
			c = a % 3;
		}

		if (b == 0)
		{
			total += 1;
			++a;
		}
		else if (c == 0)
		{
			total += 1;
			++a;
		}
		else
		{
			++a;
		}
	}
	printf("%d", total);
}
