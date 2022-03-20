#include "lists.h"

/**
 * add_nodeint - adds new a node at the beginning of a list
 *@head: pointer to head
 *@n: number passed to node
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int number = n;

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return ('\0');
	}

	new_node->n = number;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
