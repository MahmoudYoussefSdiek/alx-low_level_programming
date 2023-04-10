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

	int i, j;
	int sum = 0;
	char c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			c = argv[i][j];
			if (c < '0' || c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
