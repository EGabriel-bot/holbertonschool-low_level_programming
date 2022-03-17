#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 *@h: pointer to the head node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int cnt = 0;

	if (h == NULL)
	{
		return ('\0');
	}
	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
