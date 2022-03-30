#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * check_length - check length of string
 * @s: string to check
 *
 * Return: length of string
 */
int check_length(char *s)
{
	if (*s != '\0')
		return (1 + check_length(s + 1));
	else
		return (0);
}

/**
 * check_palindrome - check if no is palindrome
 * @a: pointer to string
 * @i: index
 * @j: length of string
 *
 * Return: (1) if true, (0) if false
 */
int check_palindrome(char *a, int i, int j)
{
	if (a[i] != a[j])
	{
		return (0);
	}
	else if (i >= j)
	{
		return (1);
	}
	else
	{
		i = i + 1;
		j = j - 1;
	}

	return (check_palindrome(a, i++, j--));
}

/**
 * is_palindrome - checks if a number is palindrome
 * @s: string to check
 *
 * Return: (1) if true, (0) if false
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j;

	j = check_length(s) - 1;

	if (*(s + i) == '\0')
	{
		return (1);
	}
	return (check_palindrome(s, i, j));
}
