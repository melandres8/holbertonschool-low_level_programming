#include "lists.h"

/**
 * free_dlistint - Free a list.
 * @head: Head node.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (current != NULL)
	{
		free_dlistint(current->next);
		free(current);
	}
}
