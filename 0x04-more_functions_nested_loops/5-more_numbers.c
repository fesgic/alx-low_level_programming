#include "main.h"

/**
 * more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	int i;
	int a = 0;

	while (a < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		a++;
		_putchar('\n');
	}
}
