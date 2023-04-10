#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it.
 *
 * @argc: number of argument
 * @argv: array of strings (argument)
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
