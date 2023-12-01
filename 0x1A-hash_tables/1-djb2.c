#include "hash_tables.h"

/**
 * hash_djb2 - This implements the djb2 algorithm
 * @str: This is the string to hash
 * Return: This is the calculated hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	for (; i = *str++; )
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
