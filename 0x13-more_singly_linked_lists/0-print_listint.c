#include "lists.h"

/**
 * print_listint - Print all the int elements of a list
 * @h: Header node
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;
	const listint_t *current = h;

	for (counter = 0; current != NULL; counter++)
	{
		printf("%i\n", current->n);
		current = current->next;
	}
	return (counter);
}
