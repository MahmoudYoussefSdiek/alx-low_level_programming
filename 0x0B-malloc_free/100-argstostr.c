#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: new_string or nul
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j, string_index, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}

	new_string = malloc(sizeof(char) * (length + 1));
	if (new_string == NULL)
		return (NULL);

	string_index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_string[string_index] = av[i][j];
			string_index++;
		}
		new_string[string_index] = '\n';
		string_index++;
	}
	new_string[string_index] = '\0';

	return (new_string);
}
