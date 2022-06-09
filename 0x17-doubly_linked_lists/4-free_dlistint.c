#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: start of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		exit(1);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
