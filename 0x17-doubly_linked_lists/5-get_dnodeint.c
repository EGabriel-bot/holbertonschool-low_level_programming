#include "lists.h"
/**
 *get_dnodeint_at_index - gets node from index
 *@head: head of a list
 *@index: position of nth node
 * Return: returns the nth node of a list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
