#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: strint to be converted
 *
 * Return: return converted string
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int d, c;

	d = 1;
	c = 0;

	while (*(s + a))
	{
		if (*(s + a) == 45)
		{
			d *= -1;
		}

		while (*(s + a) >= 48 && *(s + a) <= 57)
		{
			c = 1;
			b = (b * 10) + (*(s + a) - '0');
			a++;
		}

		if (c == 1)
		{
			break;
		}

		a++;
	}
	b *= d;
	return (b);
}
