#include "main.h"

/**
 * print_number - print numbers use only _putchar function
 *
 * @n: integer number we will print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	} else
	{
		number = n;
	}

	if (n1 / 10)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
