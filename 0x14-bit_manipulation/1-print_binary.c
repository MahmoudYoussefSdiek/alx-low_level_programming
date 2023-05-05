#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number.
 *
 * @n: The number we will print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	putchar(n % 2 + '0');
}
