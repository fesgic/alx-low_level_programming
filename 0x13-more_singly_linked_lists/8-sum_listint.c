#include "lists.h"
/**
 * sum_listint - list sum of data in list
 * @head: list
 *
 * Return:  sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		EXIT_FAILURE;
	temp = head;
	if (temp == NULL)
		return (0);
	while (temp->next != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}
	i += temp->n;
	return (i);
}
