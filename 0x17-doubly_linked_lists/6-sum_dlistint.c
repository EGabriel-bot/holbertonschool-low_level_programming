#include "lists.h"
/**
 * sum_dlistint - sum all data on the list
 *@head: head node of the list
 * Return: returns the sum of all the data of a list
 */

int sum_dlistint(dlistint_t *head)
{
	int data = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}

