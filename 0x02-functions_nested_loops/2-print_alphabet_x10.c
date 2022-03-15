#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i <= 9)
	{
		for (a = 'a'; a <= 'z';)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
