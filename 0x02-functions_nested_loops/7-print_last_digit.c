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

	if (n >= 0)
	{
		_putchar(n % 10 + '0');
		a = (n % 10);
	}
	else if (n < 0)
	{
		_putchar(-n % 10 + '0');
		a = (-n % 10);
	}
	return (a);
}
