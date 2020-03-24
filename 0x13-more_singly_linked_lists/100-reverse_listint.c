#include "lists.h"

/**
 * reverse_listint - Revers a linked list
 * @head: Head node.
 * Return: Head node pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	prev = *head;
	if (prev == NULL)
	{
		return (NULL);
	}
	nxt = prev->next;
	prev->next = NULL;

	while (nxt != NULL)
	{
		prev = nxt;
		nxt = nxt->next;
		prev->next = *head;
		*head = prev;
	}
	return (*head);
}
