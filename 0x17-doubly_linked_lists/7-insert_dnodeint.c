#include "lists.h"

/**
 * insert_dnodeint_at_index - Inset a node in a given position
 * @h: Head node
 * @idx: Index
 * @n: Number
 * Return: It depends
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (tmp == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	else if (idx == 0)
	{
		if (tmp == NULL)
			new_node->next = NULL;
		else
		{
			new_node->next = tmp;
			tmp->prev = new_node;
		}
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
