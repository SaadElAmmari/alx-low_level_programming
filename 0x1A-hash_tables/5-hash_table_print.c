#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @tbl: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *tbl)
{
	hash_node_t *node;
	unsigned long int xx;
	unsigned char comma_flag = 0;

	if (tbl == NULL)
		return;

	printf("{");
	for (xx = 0; xx < tbl->size; xx++)
	{
		if (tbl->array[xx] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = tbl->array[xx];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
