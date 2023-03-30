#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: first - second
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
