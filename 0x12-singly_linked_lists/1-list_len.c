#include "lists.h"

/**
 * list_len - returns length of list
 * @h: list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h->next == NULL)
		return (1);
	if (h->next != NULL)
	{
		h = h->next;
		count += list_len(h);
	}
	return (count);
}
