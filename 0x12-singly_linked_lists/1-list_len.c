#include "lists.h"

/**
 * list_len - List the lenght of a linked list
 * @h: Header node.
 * Return: lenght.
 */
size_t list_len(const list_t *h)
{
	size_t l;
	const list_t *current = h;

	for (l = 0; current != NULL; l++)
	{
		current = current->next;
	}
	return (l);
}
