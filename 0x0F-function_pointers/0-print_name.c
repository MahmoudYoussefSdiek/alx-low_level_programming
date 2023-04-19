#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: name we will print
 * @f: pointer to function that will print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
