#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 *
 * @argc: number of argument
 * @argv: array of strings (argument)
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{

	int i;
	int sum = 0;
	char c;

	for (i = 1; i < argc; i++)
	{
		c = *argv[i];

		if (c >= '0' && c <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
