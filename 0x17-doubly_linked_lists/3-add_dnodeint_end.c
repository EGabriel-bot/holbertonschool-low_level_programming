#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a list
 *@head: head of list
 *@n: data of node
 * Return: returns the address of new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		new->prev = last;
	}
	return (new);
}
