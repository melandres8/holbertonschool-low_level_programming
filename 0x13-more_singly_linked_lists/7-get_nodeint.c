#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: Head node.
 * @index: Of a list
 * Return: Node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int counter = 0;

	while (counter < index)
	{
		if (node->next == NULL)
		{
			return (NULL);
		}
		else
		{
			counter++;
			node = node->next;
		}
	}
	return (node);
}
