#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	hash_node_t *current;

	if (!ht || !key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	/*Finding valid slots*/
	current = ht->array[i];

	if (!current)
		return (NULL);

	while (current != NULL)
	{
		/*Returns value if found*/
		if (strcmp(current->key, key) == 0)
			return (current->value);
		/*Proceed to next key if available*/
		current = current->next;
	}
	/*it means there were >= 1 entries but not key match*/
	return (NULL);
}
