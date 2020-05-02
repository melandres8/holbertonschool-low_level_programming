#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Head node.
 * @index: Index of the node.
 * Return: nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
		{
			return (current);
		}
		counter++;
		current = current->next;
	}
	return (0);
}
