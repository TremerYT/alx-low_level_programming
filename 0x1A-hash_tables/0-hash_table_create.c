#include "hash_tables.h"

/**
 * hash_table_create - This creates a hash table.
 * @size: This is the size of the array.
 * Return: if an error occurs NULL otherwise pointer to table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	j = 0;
	while (j < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
