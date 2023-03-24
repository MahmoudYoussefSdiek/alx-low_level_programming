#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: number of times the character (_) should be printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
