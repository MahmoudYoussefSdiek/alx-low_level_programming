#include <stdio.h>
#include <string.h>

/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: number of argument
 * @argv: array of strings (argument)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - strlen(argv)]);
	return (0);
}
