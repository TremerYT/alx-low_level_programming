#include "main.h"
#include <stdio.h>

/**
 * _abs - This checks if a number is in its absolute value
 * @n: This is the number to be checked
 * Return: n else -n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
