#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 *
 * @argc: number of argument
 * @argv: array of strings (argument)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}

	printf("Error");
	return (1);
}
