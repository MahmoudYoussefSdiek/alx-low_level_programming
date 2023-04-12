#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width
 * @height: Height
 *
 * Return: array or null
 */
int **alloc_grid(int width, int height)
{

	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = calloc(sizeof(int *), height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = calloc(sizeof(int), width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	return (array);
}
