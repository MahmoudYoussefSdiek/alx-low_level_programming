#include "main.h"

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int h;
	int w;
	int i;

	if (size <= 0)
		_putchar('\n');

	for (h = 1 ; h <= size ; h++)
	{
		for (w = 1 ; w <= (size - h) ; w++)
			_putchar(' ');

		for (i = 1 ; i <= h ; i++)
			_putchar('#');

		_putchar('\n');
	}
}
