#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a linked list.
 * @head: Head node.
 * Return: Add or null.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int total;

	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
