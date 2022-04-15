#include "variadic_functions.h"

/**
 * sum_them_all - get sum
 * @n: unsigned intergers
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	if (n == 0)
	{
		va_end(ap);
		return (0);
	}

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);


}

