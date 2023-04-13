#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: new_string or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_1 = 0, length_2 = 0;
	char *new_string;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_1])
		length_1++;
	while (s2[length_2])
		length_2++;

	if (n >= length_2)
		n = length_2;

	new_string = malloc(sizeof(char) * (length_1 + n + 1));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < length_1; i++)
		new_string[i] = s1[i];

	for (i = 0; i < n; i++)
		new_string[length_1 + i] = s2[i];
	new_string[length_1 + n] = '\0';

	return (new_string);
}
