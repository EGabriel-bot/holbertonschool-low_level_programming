#include "lists.h"

/**
 * sum_listint - sum all the data of a list
 *@head: pointer to the head node
 * Return: returns the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int data;

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
