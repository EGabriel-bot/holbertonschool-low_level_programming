#include "lists.h"

/**
 * pop_listint - deletes the head node
 *@head: pointer to the head node
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	return (data);
}
