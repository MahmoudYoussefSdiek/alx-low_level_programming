#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 *
 * @b: A pointer to string.
 *
 * Return:  result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char *p = NULL;

	if (b == NULL)
		return (0);

	result = (unsigned int)strtol(b, &p, 2);
	if (*p)
		return (0);

	return (result);
}
