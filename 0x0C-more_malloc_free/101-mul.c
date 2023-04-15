#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks for a digit
 *
 * @string: character to check
 *
 * Return: 1 if digit or 0 otherwise
 */
int is_digit(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (string[i] >= '0' && string[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * _strlen - function that calculate the length of a string
 *
 * @string: string
 *
 * Return: length of string
 */
int _strlen(char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;
	return (i);
}
/**
 * errors - handles errors for main
 *
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or exit(98)
 */
int main(int argc, char *argv[])
{
	char *string_1, *string_2;
	int length_1, length_2, memory_size, i,
	    over_value, digit1, digit2, *result, flag = 0;

	string_1 = argv[1], string_2 = argv[2];
	if (argc != 3 || !is_digit(string_1) || !is_digit(string_2))
		errors();
	length_1 = _strlen(string_1);
	length_2 = _strlen(string_2);
	memory_size = length_1 + length_2 + 1;
	result = malloc(sizeof(int) * memory_size);
	if (result == NULL)
		return (1);
	for (i = 0; i <= length_1 + length_2; i++)
		result[i] = 0;
	for (length_1 = length_1 - 1; length_1 >= 0; length_1--)
	{
		digit1 = string_1[length_1] - '0';
		over_value = 0;
		for (length_2 = length_2 - 1; length_2 >= 0; length_2--)
		{
			digit2 = string_2[length_2] - '0';
			over_value += result[length_1 + length_2 + 1] + (digit1 * digit2);
			result[length_1 + length_2 + 1] = over_value % 10;
			over_value /= 10;
		}
		if (over_value > 0)
			result[length_1 + length_2 + 1] += over_value;
	}
	for (i = 0; i < memory_size - 1; i++)
	{
		if (result[i] != 0)
			flag = 1;
		if (flag != 0)
			_putchar(result[i] + '0');
	}
	if (flag == 0)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
