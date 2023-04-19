#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 *
 * @array: array
 * @size: array size
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && action)
		for (index = 0; index < size; index++)
			action(array[index]);
}
