#include "lists.h"

/**
 * get_nodeint_at_index - gets node from a list
 *@head: pointer to head node
 *@index: the node that the user wants
 * Return: returns the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
		{
			return (head);
		}
		cnt++;
		head = head->next;
	}
	return (head);
}
