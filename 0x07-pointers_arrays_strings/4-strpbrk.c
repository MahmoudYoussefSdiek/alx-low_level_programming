#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: string
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int s_loop;
	int accept_loop;

	for (s_loop = 0; *s != '\0'; s_loop++)
	{
		for (accept_loop = 0; accept[accept_loop] != '\0'; accept_loop++)
		{
			if (*s == accept[accept_loop])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
