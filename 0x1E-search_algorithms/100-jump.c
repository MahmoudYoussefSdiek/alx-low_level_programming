#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), start = 0, end = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[min(end, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start += step;
		end += step;
		if (start >= size)
			return (-1);
	}

	while (array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start++;
		if (start == min(end, size))
			return (-1);
	}

	if (array[start] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		return (start);
	}

	return (-1);
}
