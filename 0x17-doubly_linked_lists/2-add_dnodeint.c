#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: head of list
 * @n: value to add
 *
 * Return: new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		exit(1);
	if (*head == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			free(temp);
			exit(1);
		}
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		free(temp);
		return (*head);
	}
	temp->next = (*head)->next;
	temp->prev = *head;
	temp->n = (*head)->n;
	(*head)->prev = NULL;
	(*head)->next = temp;
	(*head)->n = n;
	return (*head);
}
