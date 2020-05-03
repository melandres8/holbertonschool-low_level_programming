#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node in a given position
 * @head: Head node.
 * @index: Position.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count1 = 0, count2 = 0;
	dlistint_t *store = *head;
	dlistint_t *prv = *head;
	dlistint_t *nxt = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = store->next;
		store->next->prev = NULL;
		free(store);
		return (1);
	}
	while (count1 < (index - 1) && prv != NULL)
	{
		prv = prv->next;
		count1++;
	}
	while (nxt != NULL && count2 < index)
	{
		nxt = nxt->next;
		count2++;
	}
	if (nxt == NULL || prv == NULL)
		return (-1);
	prv->next = nxt->next;
	if (nxt->next != NULL)
		nxt->next->prev = prv;
	free(nxt);
	return (1);
}
