#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of this program
 *
 * @a: address of the main function
 * @n: number of bytes
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of main
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int numbers;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbers = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, numbers);
	return (0);
}
