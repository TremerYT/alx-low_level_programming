#include "main.h"
#include <stdio.h>
/**
 * _strlen - This checks length of the string
 * @s: this is the string to be checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
