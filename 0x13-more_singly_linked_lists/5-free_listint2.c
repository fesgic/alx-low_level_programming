#include "lists.h"

/**
 * free_listint2 - sets list to NULL
 * @head: list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	while ((hold = (*head)) != NULL)
	{
		(*head) = (*head)->next;
		free(hold);
	}
	*head = NULL;
}
