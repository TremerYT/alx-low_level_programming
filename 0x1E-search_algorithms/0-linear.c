#include "search_algos.h"

/**
 * linear_search - This searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

