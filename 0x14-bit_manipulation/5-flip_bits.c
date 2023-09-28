#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counting = 0;
	unsigned long int currentone;
	unsigned long int exclusiveone = n ^ m;

	for (i = sizeof(unsigned long int) * 8; i >= 0; i--)
	{
		currentone = exclusiveone >> i;
		if (currentone & 1)
			counting++;
	}
	return (counting);
}
