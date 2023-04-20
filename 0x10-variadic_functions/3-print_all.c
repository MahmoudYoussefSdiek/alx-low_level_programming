#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	int index = 0, flag;
	char *string;
	char c;
	va_list ap;

	va_start(ap, format);
	while (format != NULL && index < strlen(format))
	{
		c = format[index];
		if (c != 'c' || c != 'i' || c != 'f' || c != 's')
			index++;
		else
		{
			switch (format[index])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					string = va_arg(ap, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s", string);
					break;
				default:
					break;
			}
			if (index < (strlen(format) - 1))
				printf(", ");
			index++;
		}
	}
	printf("\n");
	va_end(ap);
}
