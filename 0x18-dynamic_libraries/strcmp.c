#include "main.h"
#include <stdio.h>

/**
 * _strcmp - This compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if same else 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, flag;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if (s1[i] == s2[i])
		{
			flag = 0;
			break;
		}
	}

	if (flag == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
