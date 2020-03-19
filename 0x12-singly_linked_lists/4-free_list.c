#include "lists.h"

/**
 * free_list - Frees the lists.
 * @head: Header node.
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *current = head, *store;

	while (current != NULL)
	{
		store = current->next;
		free(current->str);
		free(current);
		current = store;
	}
}
