#include "3-calc.h"

/**
 * main - program that performs simple operations.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int number1, number2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(number1, number2);
	printf("%d\n", result);

	return (0);
}
