#include "main.h"

/**
 * get_bit - This returns value of a bit ata an index in decimal.
 * @n: number to see
 * @index: index of bit
 *
 * Return: should return value of bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	a = (n >> index) & 1;

	return (a);
}
