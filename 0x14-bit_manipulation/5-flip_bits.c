#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			c++;
	}

	return (c);
}
