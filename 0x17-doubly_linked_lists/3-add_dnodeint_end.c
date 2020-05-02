#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a list.
 * @head: Head node.
 * @n: Number to add.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *tmp;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
	{
		return (NULL);
	}

	tmp = *head;
	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		for (; tmp->next != NULL;)
		{
			tmp = tmp->next;
		}
		tmp->next = current;
	}
	
	current->n = n;
	current ->next = NULL;

	return (current);
}
