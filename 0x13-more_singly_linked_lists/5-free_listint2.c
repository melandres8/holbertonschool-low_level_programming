#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Head node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *store;

	if (current)
	{
		while (current != NULL)
		{
			store = current->next;
			free(current);
			current = store;
		}
	}
}
