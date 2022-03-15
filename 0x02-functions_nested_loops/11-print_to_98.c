#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers to 98
 * @n: range from
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98;)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			++n;
		}
	}
	else if (n > 98)
	{
		for (; n >= 98;)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			--n;
		}
	}
	printf("\n");
}
