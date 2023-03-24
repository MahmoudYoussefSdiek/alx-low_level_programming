#include "main.h"
/**
 * print_diagonal - prints a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
