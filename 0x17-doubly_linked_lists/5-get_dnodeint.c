#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index to fetch
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int track = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		exit(1);
	temp = head;
	if (temp == NULL)
		return (NULL);
	while (temp != NULL && index > 0 && track <= index)
	{
		if (track == index)
			return (temp);
		temp = temp->next;
		track++;
	}
	return (NULL);
}
