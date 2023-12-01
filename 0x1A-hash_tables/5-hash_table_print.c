#include "hash_tables.h"

/**
 * hash_table_print - This prints the hash table
 * @ht: This is the pointer of the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char commas = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (commas == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			commas = 1;
		}
	}
	printf("}\n");
}
