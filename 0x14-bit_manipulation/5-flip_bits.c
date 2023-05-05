#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_value = n ^ m;
	unsigned int count = 0;

	while (new_value)
	{
		count += new_value & 1;
		new_value = new_value >> 1;
	}
	return (count);
}
