#include "lists.h"

/**
 * print_dlistint - print all the elemnts in a list
 *@h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
