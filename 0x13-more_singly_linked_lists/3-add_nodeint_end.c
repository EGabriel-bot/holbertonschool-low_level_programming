#include "lists.h"

/**
 * add_nodeint_end - adds new a node at the end of a list
 *@head: pointer to head
 *@n: number passed to node
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int number = n;

	listint_t *new_node;
	listint_t *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return ('\0');
	}

	new_node->n = number;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}
