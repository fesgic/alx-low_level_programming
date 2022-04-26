#include "lists.h"

/**
 * reverse_listint - reversealist
 * @head: list
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *current;

	if ((*head) != NULL)
	{
	previous = (*head);
	current = (*head)->next;
	(*head) = (*head)->next;
	previous->next = NULL;
	while (*head != NULL)
	{
		(*head) = (*head)->next;
		current->next = previous;
		previous = current;
		current = (*head);
	}
	(*head) = previous;
	}
	return (*head);
}
