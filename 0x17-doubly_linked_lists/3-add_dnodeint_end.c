#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: start of list
 * @n: number to add
 *
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *track;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			exit(1);
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
		return (*head);
	}
	track = malloc(sizeof(dlistint_t));
	if (track == NULL)
		exit(1);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(track);
		exit(1);
	}
	track = *head;
	while (track->next != NULL)
		track = track->next;
	track->next = temp;
	temp->prev = track;
	temp->next = NULL;
	temp->n = n;
	return (*head);
}
