#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - splits a string into words
 *
 * @str: string
 *
 * Return: pointer to an array of strings (words) or NULL if it fails
 */

int count_words(char *str)
{
	int i, count;
	int length = strlen(str);

	i = count = 0;

	while (i < length)
	{
		while (i < length && str[i] == ' ')
			i++;

		if (i < length && str[i] != ' ')
		{
			count++;
			while (i < length && str[i] != ' ')
				i++;
		}
	}

	return (count);
}
/**
 * strtow - function that splits a string into words.
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL if it fails
 */
char **strtow(char *str)
{
	int i, j, index;
	int length = strlen(str);
	char **words;

	i = j = index = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = malloc((count_words(str) + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	while (i < length)
	{
		while (i < length && str[i] == ' ')
			i++;
		if (i < length && str[i] != ' ')
		{
			j = i;
			while (i < length && str[i] != ' ')
				i++;
			words[index] = malloc((i - j + 1) * sizeof(char));
			if (words[index] == NULL)
				return (NULL);
			strncpy(words[index], &str[j], i - j);
			words[index][i - j] = '\0';
			index++;
		}
	}
	words[index] = NULL;
	return (words);
}
