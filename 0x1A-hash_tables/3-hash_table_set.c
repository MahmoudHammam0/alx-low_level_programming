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
	hash_node_t *node = create_item(key, value);
	int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current_item = ht->array[index];

	if (node == NULL)
		return (0);
	if (current_item == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			current_item->value = malloc(strlen(value) + 1);
			strcpy(current_item->value, value);
			return (1);
		}
		else
		{
			node->next = current_item;
			ht->array[index] = node;
			return (1);
		}
	}
	return (0);
}

/**
 * create_item - create item to be added to the hash_table
 * @key: key string
 * @value: value string
 * Return: a pointer to created item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL)
		return (NULL);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}
