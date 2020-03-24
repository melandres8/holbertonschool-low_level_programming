#include "lists.h"

/**
 * pop_listint - Delete the head node of a list.
 * @head: Head node.
 * Return: 0;
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *node;

	if (!*head)
	{
		return (0);
	}

	node = *head;
	number = node->n;
	*head = (*head)->next;
	free(node);

	return (number);
}