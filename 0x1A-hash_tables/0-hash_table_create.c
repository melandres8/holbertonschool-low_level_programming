#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: table size
 * Return: newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;

	hash = malloc(sizeof(hash_table_t) * 1);
	if (!hash)
		return (NULL);
	if (!size)
		return (NULL);
	hash->size = size;
	hash->array = calloc(size, sizeof(hash_table_t **));
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
