#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of list
 * @idx: index
 * @n: value to insert
 *
 * Return: pointer to list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int track = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *new;

	if (temp == NULL)
		exit(1);
	if (*h == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp = *h;
	while (temp != NULL && idx > 0 && track < (idx - 1))
	{
		temp = temp->next;
		track++;
	}
	if (track == idx - 1)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			free(temp);
			return (NULL);
		}
		new->n = n;
		new->next = temp->next;
		new->prev = (temp->next)->prev;
		(temp->next)->prev = new;
		temp->next = new;
		return (*h);
	}
	return (NULL);
}
