#include "hash_tables.h"

/**
 * key_index - This gets the index which a key should be stored
 * @key: This is the key
 * @size: This is the size of the array of the hash table
 *
 * Return: This should return the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size)
}
