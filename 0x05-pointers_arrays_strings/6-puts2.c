#include "main.h"

/**
 * puts2 - prints chars with % 2 = 0
 * @str: string to be checked
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
