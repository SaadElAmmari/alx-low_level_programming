#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @aa: A pointer to the hash table.
 * @k: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with k in aa.
 */
char *hash_table_get(const hash_table_t *aa, const char *k)
{
	hash_node_t *node;
	unsigned long int mo;

	if (aa == NULL || k == NULL || *k == '\0')
		return (NULL);

	mo = key_index((const unsigned char *)k, aa->size);
	if (mo >= aa->size)
		return (NULL);

	node = aa->array[mo];
	while (node && strcmp(node->key, k) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
