#include "main.h"
#include <stdio.h>

/**
 * _puts - this puts character
 * @s: this is the string.
 * Return: string
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[1] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
