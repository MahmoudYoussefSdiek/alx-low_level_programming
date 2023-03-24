#include "main.h"
/**
 * print_square - prints a straight line in the terminal
 * @size: number of times the character _ should be printed
 *
 * Return: 0
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
