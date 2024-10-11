#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hi = ht;
	hash_node_t *node, *tempo;
	unsigned long int d;

	for (d = 0; d < ht->size; d++)
	{
		if (ht->array[d] != NULL)
		{
			node = ht->array[d];
			while (node != NULL)
			{
				tempo = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tempo;
			}
		}
	}
	free(hi->array);
	free(hi);
}
