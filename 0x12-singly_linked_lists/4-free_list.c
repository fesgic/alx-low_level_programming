#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t next;

	while (head)
	{
		next = head->next;
		free(head->next);
		free(head);
		head = next;
	}
}
