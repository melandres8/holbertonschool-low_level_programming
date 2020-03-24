#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a list.
 * @head: Head node.
 * @index: Index that should be deleted.
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count1, count2;
	listint_t *store = *head;
	listint_t *prev = *head;
	listint_t *nxt = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = store->next;
		free(store);
		return (1);
	}

	count1 = 0;
	while (count1 < (index - 1) && prev != NULL)
	{
		prev = prev->next;
		count1++;
	}

	count2 = 0;
	while (nxt != NULL && count2 < index)
	{
		nxt = nxt->next;
		count2++;
	}
	if (nxt == NULL || prev == NULL)
	{
		return (-1);
	}
	prev->next = nxt->next;

	free(nxt);
	return (1);
}