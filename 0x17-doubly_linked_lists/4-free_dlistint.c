#include "lists.h"
/**
 * free_dlistint - free a list
 *@head: head of a list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
