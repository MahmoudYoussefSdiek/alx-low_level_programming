#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @n: number of parameter
 * @separator: separator between numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));
		if (index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
