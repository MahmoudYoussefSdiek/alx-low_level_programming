#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: new_string or null
 */
char *_strdup(char *str)
{
	char *new_string;

	new_string = malloc(strlen(str) + 1);

	if (str == NULL || new_string == NULL)
		return (NULL);

	strcpy(new_string, str);
	return (new_string);
}
