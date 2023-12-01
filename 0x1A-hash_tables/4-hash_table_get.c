#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to be searched
 * @key: item key
 * Return: value of the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL)
		return (NULL);
	if (strcmp(item->key, key) == 0)
		return (item->value);
	return (NULL);
}
