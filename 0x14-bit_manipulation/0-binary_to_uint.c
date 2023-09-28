#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: String containing the binary number.
 *
 * iReturn: the number that is converted.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
