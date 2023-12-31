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
	hash_node_t *node = NULL;
	unsigned long int index = 0;
	hash_node_t *current_item = NULL;

	if (ht == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_item = ht->array[index];
	node = create_item(key, value);
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
			free(current_item->value);
			current_item->value = strdup(value);
			free(node->key);
			free(node->value);
			free(node);
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
	hash_node_t *node = NULL;

	if (key == NULL || *key == '\0')
		return (NULL);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
