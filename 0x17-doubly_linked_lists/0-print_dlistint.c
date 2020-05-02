#include "lists.h"

/**
 * print_dlistint - Print the elements of a list.
 * @h: head node.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;
	const dlistint_t *current = h;

	for (counter = 0; current != NULL; counter++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (counter);
}
