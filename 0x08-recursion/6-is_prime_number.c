#include "main.h"

/**
 * _divide - check if divisible by 2
 * @a: number to check
 * @b: divifing with
 *
 * Return: (1) if prime, else (0)
 */
int _divide(int a, int b)
{
	if (a % b == 0)
	{
		return (0);
	}
	if (b == a / 2)
	       return (1);	
	
	return (_divide(a, b + 1));
}

/**
 * is_prime_number - checki if a number is prime
 * @n: number to check
 * Return: (1) if prime, else (0)
 *
 */
int is_prime_number(int n)
{
	int b = 2;

	if (n <=1)
	{
		return (0);
	}


	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (_divide(n, b));
}
