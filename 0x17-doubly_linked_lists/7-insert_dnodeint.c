#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at index of list
 *@h: head of list
 *@idx: given index
 *@n: data
 * Return: new node added at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *temp = *h;
	dlistint_t *new_node;
	unsigned int i;

	for (count = 0; temp != NULL; count++)
	{
		temp = temp->next;
	}
	if (idx > count || *h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx > 0 && idx < count)
	{
		temp = *h;
		for (i = 1; i < idx; i++)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next->prev = new_node;
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	if (idx == count)
	{
		add_dnodeint_end(h, n);
	}
	return (new_node);
}
