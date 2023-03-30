#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string with n limits
 *
 * @dest: source
 * @src: destination
 * @n: limit number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int src_length;
	int i;

	src_length = strlen(src);
	for (i = 0; i < src_length && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
