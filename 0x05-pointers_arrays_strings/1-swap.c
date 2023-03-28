#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int flag;

	flag = *a;
	*a = *b;
	*b = flag;
}
