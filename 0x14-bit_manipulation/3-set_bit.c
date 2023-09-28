#include "3-set_bit.c"

/**
 * set_bit - sets bit at given index to 1
 * @n: pointer to the number
 * @index: index of bit set to 1
 *
 * Return: 1 for success, -1 failiur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int a = 1UL << index;
	*n |= a;

	return (1);
}
