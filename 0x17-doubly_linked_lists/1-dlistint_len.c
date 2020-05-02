#include "lists.h"

/**
 * dlistint_len - Print the length of a list
 * @h: Header file
 * Return: Length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	const dlistint_t *current = h;

	for (len = 0; current != NULL; len++)
	{
		current = current->next;
	}
	return (len);
}
