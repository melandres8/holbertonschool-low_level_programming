#include "lists.h"

/**
 * sum_dlistint - Sum all of elements in a list.
 * @head: Head node.
 * Return: if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *sig;
	int sum = 0;

	while (current != NULL)
	{
		sig = current->next;
		if (current->n)
		{
			sum += current->n;
		}
		current = sig;
	}
	return (sum);
}
