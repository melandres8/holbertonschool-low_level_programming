#include "lists.h"

/**
 * print_list - Print all elements of a list.
 * @h: Header nodes.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter;
	const list_t *current = h;

	for (counter = 0; current != NULL; counter++)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
	}
	return (counter);
}
