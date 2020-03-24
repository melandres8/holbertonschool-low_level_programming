#include "lists.h"

/**
 * listint_len - Print the length of an int list.
 * @h: Header node.
 *
 * Return: The length.
 */
size_t listint_len(const listint_t *h)
{
	size_t len;
	const listint_t *current = h;

	for (len = 0; current != NULL; len++)
	{
		current = current->next;
	}
	return (len);
}
