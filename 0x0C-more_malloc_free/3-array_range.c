#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: p or null
 */

int *array_range(int min, int max)
{
	int *p;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	p = malloc(length * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		p[i] = min++;

	return (p);
}
