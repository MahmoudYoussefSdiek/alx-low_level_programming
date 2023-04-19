#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: array to search in
 * @size: array size
 * @cmp: pointer to function
 *
 * Return: return index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
		if (cmp(array[index]) != 0)
			return (index);

	return (-1);
}
