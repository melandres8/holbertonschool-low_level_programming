#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *current = NULL, *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			while (current != NULL)
			{
				tmp = current->next;
				free(current->key);
				if (current->value != NULL)
					free(current->value);
				free(current);
				current = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
