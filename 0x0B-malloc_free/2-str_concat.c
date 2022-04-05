#include "main.h"
#include <stdlib.h>

char *_concatenate(char *s1, char *s2, int i,
		int j, int track, int k, char conc[]);
/**
 * _concatenate - concatenate 2 stings
 * @s1: string to append to
 * @s2: string to append from
 * @i: length of s1
 * @j: length of s2
 * @k: trak one string to another
 * @track: lenght of both strings
 * @conc: new appended string
 *
 * Return: pointer to concatenated string
 */
char *_concatenate(char *s1, char *s2, int i,
		int j, int track, int k, char conc[])
{
	/* concatenate the string */
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		conc[i] = s1[i];
	}
	k = i++;
	i = 0;
	for (j = k; j < track; j++)
	{
		conc[j] = s2[i];
		i++;
	}
	conc[j++] = '\0';

	return (conc);
}
/**
 * str_concat - concatenate 2 strings
 * @s1: string to append to
 * @s2: string to append from
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int track = 0;
	int k = 0;
	char *conc;
	char *final;

	/* get length of s1 */
	/* also track length of the 2 strings */
	while (*(s1 + i) != '\0' && s1 != NULL)
	{
		i++;
		track++;
	}
	if (s1 == NULL)
	{
		track = track + 0;
	}
	/* track length of the 2 strings */
	while (*(s2 + j) != '\0' && s2 != NULL)
	{
		j++;
		track++;
	}
	if (s2 == NULL)
	{
		track = track + 0;
	}

	/* assign memory */
	conc = malloc(track + 1);
	if (conc == NULL)
	{
		return (NULL);
	}

	final = _concatenate(s1, s2, i, j, track, k, conc);

	return (final);
}
