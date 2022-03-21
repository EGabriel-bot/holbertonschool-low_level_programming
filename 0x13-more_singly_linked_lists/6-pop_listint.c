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

	if (head == NULL)
	{
		return ('\0');
	}
	else
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
<<<<<<< HEAD
	data = (*head)->n;

=======
>>>>>>> e40b8bbadd231a4ff0b6c9ef1e156179abf7ca90
	return (data);
}
