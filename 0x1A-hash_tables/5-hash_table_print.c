#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to printed
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (count != 0)
				printf(", ");
			printf("'%s': ", ht->array[i]->key);
			printf("'%s'", ht->array[i]->value);
			count++;
			node = ht->array[i]->next;
			while (node)
			{
				printf(", ");
				printf("'%s': ", node->key);
				printf("'%s'", node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
