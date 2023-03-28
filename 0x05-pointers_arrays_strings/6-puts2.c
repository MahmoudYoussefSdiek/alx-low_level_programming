#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 *
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
