#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 * @head: double pointer to struct
 * @n: no. to add
 *
 * Return: list with new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
