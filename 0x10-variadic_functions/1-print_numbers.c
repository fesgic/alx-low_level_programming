#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * followed by new line
 * @separator: separator character
 * @n: numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;


	if (separator == NULL)
	{
		va_end(ap);
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("\n");
	va_end(ap);
}
