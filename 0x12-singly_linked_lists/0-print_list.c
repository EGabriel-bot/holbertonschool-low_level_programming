#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *@h: pointer to the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;

	if (h == NULL)
	{
		return ('\0');
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		cnt++;
	}
	return (cnt);
}
