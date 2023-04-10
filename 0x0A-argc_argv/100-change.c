#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of argument
 * @argv: array of strings (argument)
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins_values[] = {25, 10, 5, 2, 1};
	int coins_number = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (cents >= coins_values[i])
		{
			coins_number += cents / coins_values[i];
			cents = cents % coins_values[i];
		}
	}

	printf("%d\n", coins_number);
	return (0);
}
