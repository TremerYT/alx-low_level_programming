#include "main.h"
#include <stdio.h>

/**
 * _isupper - This checks for uppercase letter
 * @c: This is the character to be checked
 * Return: 1 if true else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
