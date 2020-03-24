#include "lists.h"

/**
 * free_listint - Frees the nodes
 * @head: Head node.
 * Return: Return nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head, *store;

	while (current != NULL)
	{
		store = current->NULL;
		free(current);
		current = store;
	}
}
