#include "main.h"

/**
 * print_square - prints a square based on size given
 * @size: size of square
 *
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
