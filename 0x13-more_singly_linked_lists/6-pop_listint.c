#include "lists.h"

/**
 * pop_listint - deletes the head node
 *@head: pointer to the head node
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;

	int data = (*head)->n;

	if (head == NULL)
	{
		return (0);
	}
	if ((*head)->next == NULL)
	{
		return (0);
	}
	else
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	return (data);
}
