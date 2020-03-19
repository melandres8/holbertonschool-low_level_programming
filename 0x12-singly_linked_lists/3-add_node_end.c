#include "lists.h"
#include <string.h>

/**
 * _strlen - Calculate the value of a string
 * @s: Pointer to a char
 * Return: the value
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - Add a node at the end.
 * @head: Head node
 * @str: String
 * Return: Address of a new elemnt or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head, *tmp;

	current = malloc(sizeof(list_t));
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

	current->str = strdup(str);
	current->len = _strlen(str);
	current->next = NULL;

	return (current);
}
