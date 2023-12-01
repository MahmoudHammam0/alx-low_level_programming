#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key string
 * @value: value string
 * Return: 1 (Success) otherwise return 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current_item = ht->array[index];

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (0);
	}
	node->next = NULL;
	if (current_item == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	if (strcmp(current_item->key, key) == 0)
	{
		free(current_item->value);
		current_item->value = strdup(value);
		return (1);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
