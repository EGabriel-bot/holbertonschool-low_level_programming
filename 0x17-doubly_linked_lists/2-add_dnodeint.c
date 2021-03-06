#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of a list
 *@head: head of list
 *@n: data of new node
 * Return: adress of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	if (new == NULL)
	{
		return (NULL);
	}

	return (new);
}

