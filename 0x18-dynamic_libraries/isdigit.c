#include "main.h"
#include <stdio.h>

/**
 * _isdigit - This checks if c is a digit
 * @c: This is the one to be checked
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
