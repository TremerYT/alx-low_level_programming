#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: Pointer
 * @index: index to bit.
 *
 * Return: 1 success, -1 failiur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
