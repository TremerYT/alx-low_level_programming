#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - This is used to contacate string
 * @dest: destination string
 * @src: source string
 * Return: contacnated string
 */

char *_strcat(char *dest, char *src)
{
	int i, length1, length2;

	length1 = strlen(src);
	length2 = strlen(dest);

	for (i = 0; i < length1; i++)
	{
		dest[length2 + i] = src[i];
	}

	return (dest);
}
