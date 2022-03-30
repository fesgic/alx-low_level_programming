#include "main.h"

/**
 * _square_root - find sqrt of number
 * @a: number to find sqrt
 * @b: divide
 *
 * Return: (1) if perfect sqr, (0) if not
 */
int _square_root(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	if ((b * b) > a)
	{
		return (-1);
	}
	b++;
	return (_square_root(a, b));
}

/**
 * _sqrt_recursion - find sqrt by recursion
 * @n: find sqrt of n
 *
 * Return: square root of no
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 1)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}

	return (_square_root(n, i));
}
