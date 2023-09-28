#include "main.h"

/**
 * print_binary - This prins prints biary equal to a decimal.
 * @n: is the number to convert in binary.
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = sizeof(unsigned long int) * 8; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
