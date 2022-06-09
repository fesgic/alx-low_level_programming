#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index to delete node
 *
 * Return: success 1, failure -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int track = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (-1);
	if (*head == NULL)
		return (1);
	temp = *head;
	if ((*head)->next == NULL && (*head)->prev == NULL)
	{
		(*head) = NULL;
		return (1);
	}
	if (index == 0 && *head != NULL)
	{
		free(temp);
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	while (temp != NULL && track < index - 1)
	{
		temp = temp->next;
		track++;
	}
	if (track == index - 1 && *head != NULL)
	{
		((temp->next)->next)->prev = (temp->next)->prev;
		temp->next = (temp->next)->next;
		return (1);
	}
	return (-1);
}
