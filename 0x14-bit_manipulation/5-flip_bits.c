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
	int i, a = 0;
	unsigned long int b;
	unsigned long int c = n ^ m;

	for (i = sizeof(unsigned long int) * 8; i >= 0; i--)
	{
		b = c >> i;
		if (b & 1)
			a++;
	}
	return (a);
}

