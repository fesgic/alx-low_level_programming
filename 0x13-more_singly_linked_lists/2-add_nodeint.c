#include "lists.h"

/**
 * head - double pointer to struct
 * @n: no. to add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (*head == NULL)
	{
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
