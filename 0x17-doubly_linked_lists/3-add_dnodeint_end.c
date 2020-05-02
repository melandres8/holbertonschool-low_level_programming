#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a list.
 * @head: Head node.
 * @n: Number to add.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (end == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	for (; end->next != NULL;)
		end = end->next;

	end->next = new_node;
	new_node->prev = end;

	return (end);
}
