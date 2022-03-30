#include "main.h"

/**
 * _puts_recursion - prints a string followed
 * by new line
 * @s: pointet to string passed
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion((s + i));
	}
	else if (*(s + i) == '\0')
	{
		_putchar(*(s + i));
	}
}
