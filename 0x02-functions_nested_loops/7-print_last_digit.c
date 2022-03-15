#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: value to check last digit
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}

	a = n % 10;
	_putchar(a + '0');
	return (a);

}
