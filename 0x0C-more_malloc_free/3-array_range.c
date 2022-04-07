#include "main.h"
#include <stdlib.h>

/**
 * array_range - range to create arrya
 * @min: min range for array
 * @max: max range for array
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p, j, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
		p[j] = j;

	return (p);
}
