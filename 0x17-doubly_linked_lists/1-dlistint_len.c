#include "lists.h"
/**
 * dlistint_len - number of elements of a linked list
 *@h: head of list
 * Return: returns the number of elements of a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
