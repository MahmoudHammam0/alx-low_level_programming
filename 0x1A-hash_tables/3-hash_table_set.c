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
	unsigned long int index = key_index((unsigned char *)key, ht->size), i;
	hash_node_t *current_item = ht->array[index];

	if (node == NULL || ht == NULL)
		return (0);
	if (current_item == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		for (i = index; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
		else
		{
			node->next = ht->array[index];
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
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
