#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *current;
	char *sp = "";

	if (ht == NULL)
	{
		printf("%s", sp);
	}
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				printf("%s'%s': '%s'", sp, current->key, current->value);
				current = current->next;
				sp = ", ";
			}
		}
		printf("}\n");
	}
}
