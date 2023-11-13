#include "main.h"
#include <stdio.h>

/**
 * _islower - This checks if c is a lowercase
 * @c: This is the parameter to be checked
 * Return: 1 if true else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
