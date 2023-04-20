#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: the number of parameters passed
 *
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int index;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
