#include "main.h"

/**
 * get_endianness - checks machine small or big
 * Return: 0 for big, 1 for small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char *) &i;

	return (*b);
}
