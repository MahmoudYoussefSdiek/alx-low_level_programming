#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings with limits n
 *
 * @dest: string
 * @src: string
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = strlen(dest);
	int src_length = strlen(src);
	int i;

	for (i = 0; i < src_length && i < n ; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	return (dest);
}
