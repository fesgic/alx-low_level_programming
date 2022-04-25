#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements in a list
 * @h: pointer to list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
