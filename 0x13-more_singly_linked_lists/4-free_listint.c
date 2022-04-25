#include "lists.h"

/**
 * free_listint - free memory allocated for list
 * @head: list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while ((hold = head) != NULL)
	{
		head = head->next;
		free(hold);
	}
}
