#include "main.h"
#include <stdio.h>

/**
 * _strcpy - This copies a string from source to destination
 * @dest: this is the destination
 * @src: this is the source of the string
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

