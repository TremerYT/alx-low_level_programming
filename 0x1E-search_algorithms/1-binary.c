#include "search_algos.h"

/**
 * recursive_search - This searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t nusu = size / 2;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);

	printf("\n");

	if (nusu && size % 2 == 0)
		nusu--;

	if (value == array[nusu])
		return ((int)nusu);

	if (value < array[nusu])
		return (recursive_search(array, nusu, value));

	nusu++;

	return (recursive_search(array + nusu, size - nusu, value) + nusu);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

