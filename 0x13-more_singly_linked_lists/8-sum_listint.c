#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: Head node.
 * Return: Add or null.
 */
int sum_listint(listint_t *head)
{
	int total;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
