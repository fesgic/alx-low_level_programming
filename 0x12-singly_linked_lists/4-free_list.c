#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *next;

	while ((next = head) != NULL)
	{
		head = head->next;
		free(next->str);
		free(next);
	}
}
