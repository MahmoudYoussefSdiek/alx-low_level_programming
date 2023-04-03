#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in a string
 *
 * @c: character we will use it to search
 * @s:  string we will search in
 *
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
