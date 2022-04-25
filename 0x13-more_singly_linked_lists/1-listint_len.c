#include "lists.h"

/**
 * listint_len - length of list
 * @h: pointer to struct
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *head;
	size_t i = 0;

	if (h == NULL)
		return (0);
	head = malloc(sizeof(listint_t));
	if (head == NULL)
		EXIT_FAILURE;
	*head = *h;
	while (head->next != NULL)
	{
		i++;
		head = h->next;
	}
	i++;
	return (i);
}
