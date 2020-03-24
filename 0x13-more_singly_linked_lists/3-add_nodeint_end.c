#include "lists.h"

/**
 * add_nodeint_end - Add node at the end of a list
 * @head: Head nodes
 * @n: Number.
 * Return: Address of a new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head, *tmp;

	current = malloc(sizeof(listint_t));
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
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = current;
	}

	current->n = n;
	current->next = NULL;

	return (current);
}
