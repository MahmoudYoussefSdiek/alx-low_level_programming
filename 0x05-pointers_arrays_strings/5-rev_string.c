#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int i;
	int j;
	char flag;

	j = length - 1;
	for (i = 0; i < j; i++)
	{
		flag = s[i];
		s[i] = s[j];
		s[j] = flag;
		j--;
	}
}
