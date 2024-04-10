#include "search_algos.h"

/**
 * rec_search - This searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t nusu = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (nusu && size % 2 == 0)
		nusu--;

	if (value == array[nusu])
	{
		if (nusu > 0)
			return (rec_search(array, nusu + 1, value));
		return ((int)nusu);
	}

	if (value < array[nusu])
		return (rec_search(array, nusu + 1, value));

	nusu++;
	return (rec_search(array + nusu, size - nusu, value) + nusu);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

