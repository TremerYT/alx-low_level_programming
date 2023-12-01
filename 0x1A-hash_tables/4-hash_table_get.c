#include "hash_tables.h"

/**
 * hash_table_get - This should retrieve the value associated with key
 * @ht: This is the pointer to the hash table
 * @key: This is the key
 * Return: if key does not match return NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_ind((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	node = ht->array[ind];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
