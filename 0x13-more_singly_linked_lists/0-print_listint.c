#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements in a list
 * @h: pointer to list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *head;

	head = malloc(sizeof(listint_t));
	if (head == NULL)
		EXIT_FAILURE;
	if (h == NULL)
	{
		free(head);
		EXIT_FAILURE;
	}
	else
	{
		*head = *h;
		while (head->next != NULL)
		{
			printf("%d\n", head->n);
			i++;
			head = h->next;
		}
		printf("%d\n", head->n);
		i++;
	}
	return (i);
}
