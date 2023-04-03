#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @n: number of cpoyies
 * @src:  memory area we will copy from
 * @dest:  pointer to char that we will put our copy in
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
