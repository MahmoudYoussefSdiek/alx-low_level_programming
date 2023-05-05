#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *endianness = (char *)&x;

	if (*endianness)
		return (1);
	else
		return (0);
}
