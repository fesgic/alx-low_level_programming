#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: characters to be sorted for capitalization
 *
 * Return: returns capitalized words
 */
char *cap_string(char *a)
{
	int i = 0;
	int j;
	char d[] = {' ', ' ', '\t', '\n', ',', ';', '.'};
	char e[] = {'!', '?', '"', '(', ')', '{', '}'};

	while (*(a + i) != '\0')
	{
		for (j = 0; j < 7; j++)
		{
			if (*(a + i) == d[j] || *(a + i) == e[j])
			{
				if (*(a + i + 1) >= 97 && *(a + i + 1) <= 122)
				{
					a[i + 1] -= 32;
				}

			}
		}
		i++;
	}
	return (a);
}
