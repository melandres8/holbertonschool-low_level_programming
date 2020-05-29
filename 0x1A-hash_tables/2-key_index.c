#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: key
 * @size: hash size
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash;

	if (size == 0 || !key)
		return (0);
	hash = (hash_djb2(key) % size);
	return (hash);
}
