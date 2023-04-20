#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int index, flag, length;
	char *string;
	va_list ap;

	length = strlen(format);
	va_start(ap, format);
	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		flag = 0;
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
				flag = 1;
				break;
		}
		if (format[index + 1] != '\0' && flag == 0)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(ap);
}
