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

	number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}

	if (number / 10 != 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
