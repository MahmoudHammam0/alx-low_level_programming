#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of hash table
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_table_t));
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	return (ptr);
}