#include "main.h"
#include <string.h>

/**
 * _strcat - This function appends the src string to the dest string
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int src_length = strlen(src);
	int i;

	for (i = 0; i < src_length; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	return (dest);
}
