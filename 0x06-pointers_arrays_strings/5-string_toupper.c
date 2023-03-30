#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: string
 *
 * Return: the uppercase
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32;
		}
		p++;
	}

	return (s);
}
