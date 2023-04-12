#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int s1_length, s2_length;

	s1_length = 0;
	s2_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	new_string = malloc((s1_length + s2_length + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	strcpy(new_string, s1);
	strcpy(new_string + s1_length, s2);
	return (new_string);
}
