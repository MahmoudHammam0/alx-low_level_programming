#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			node = ht->array[i]->next;
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
			free(ht->array[i]);
		}
	}
	free(ht);
}
