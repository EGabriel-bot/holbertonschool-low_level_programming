#include "lists.h"

/**
 * free_listint2 - frees a list
 *@head: pointer to head
 * Return:
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
}
