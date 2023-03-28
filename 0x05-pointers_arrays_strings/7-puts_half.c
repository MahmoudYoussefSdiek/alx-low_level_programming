#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
