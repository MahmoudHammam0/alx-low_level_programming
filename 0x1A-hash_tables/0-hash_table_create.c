#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of hash table
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr->array[i] = NULL;
	}
	return (ptr);
}
