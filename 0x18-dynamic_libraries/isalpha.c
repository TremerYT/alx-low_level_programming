#include "main.h"
#include <stdio.h>

/**
 * _isalpha - This checks if c is an alphabet
 * @c: this is the parameter to be checked
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
