#include "lists.h"

/**
 * add_node - adds new a node at the beginning of a list
 *@head: pointer to head
 *@str: name of node
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = strlen(str);

	list_t *new_node;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return ('\0');
	}

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
