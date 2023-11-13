#include "main.h"

/**
 * _atoi - This converts a string to an integer
 * @s: this is the string
 * Return: string
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (sign * res);
}
