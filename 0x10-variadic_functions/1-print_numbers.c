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

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator == NULL)
				printf("%d", va_arg(ap, int));
			else if (separator != NULL)
				printf("%d%s", va_arg(ap, int), separator);
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
