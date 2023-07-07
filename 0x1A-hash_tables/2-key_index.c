#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table array
 *
 * @key: The key string
 * @size: The size of the hash table array
 *
 * Return: The index for key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
