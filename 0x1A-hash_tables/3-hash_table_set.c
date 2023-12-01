#include "hash_tables.h"

/**
 * hash_tables_set - This adds the elements in hash table
 * @ht: This is a pointer
 * @key: This is the key to add
 * @value: This is the value associated with the key
 *
 * Return: Upon failiure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *value_copy;
	unsigned long int ind, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(value_copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = value_copy;
	n->next = ht->array[ind];
	ht->array[ind] = n;

	return (1);
}
