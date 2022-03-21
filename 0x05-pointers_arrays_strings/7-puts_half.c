#include "main.h"

/**
 * puts_half - print second half of string
 * @str: pointer to string to be checked
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		while (*(str + n) != '\0')
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		while (*(str + n) != '\0')
		{
			_putchar(*(str + n));
			n++;
		}
	}
	_putchar('\n');

}
