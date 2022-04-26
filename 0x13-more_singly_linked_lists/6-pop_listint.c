#include "lists.h"

/**
 * pop_listint - delete head node of a list
 * @head: list
 *
 * Return: data in head node
 */
int pop_listint(listint_t **head)
{
	listint_t temp;

	(&temp)->n = (*head)->n;
	(*head) = (*head)->next;
	return ((&temp)->n);
}
