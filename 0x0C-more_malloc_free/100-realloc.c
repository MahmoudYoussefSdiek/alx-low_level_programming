#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr: old pointer
 * @old_size: size of old pointer
 * @new_size: new pointer size
 *
 * Return: new_p or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);

		return (new_p);
	}
	if (new_size == old_size)
		return (ptr);

	new_p = malloc(new_size);
	if (new_p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		(char *)new_p[i] = (char *)ptr[i];
	free(ptr);
	return (new_p);
}
