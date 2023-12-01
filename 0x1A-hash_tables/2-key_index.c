#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key string
 * @size: size of array of hash table
 * Return: index of the key in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
