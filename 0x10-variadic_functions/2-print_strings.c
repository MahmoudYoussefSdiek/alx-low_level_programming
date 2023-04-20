#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: separator between strings
 * @n: number of parameters
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int index;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
