#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @v: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *v)
{
	hash_node_t *new;
	char *v_copy;
	unsigned long int index, u;

	if (ht == NULL || key == NULL || *key == '\0' || v == NULL)
		return (0);

	v_copy = strdup(v);
	if (v_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (u = index; ht->array[u]; u++)
	{
		if (strcmp(ht->array[u]->key, key) == 0)
		{
			free(ht->array[u]->value);
			ht->array[u]->value = v_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = v_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
