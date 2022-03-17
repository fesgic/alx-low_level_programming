#include "main.h"

/**
 * _isupper - checks if a number is upper case
 * @c: number to be checked
 *
 * Return: Return 1 upper case, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
