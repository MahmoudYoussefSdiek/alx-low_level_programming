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
	int length1, length2, memory_s, i, over_v, digit1, digit2, *result, flag = 0;

	string_1 = argv[1], string_2 = argv[2];
	if (argc != 3 || !is_digit(string_1) || !is_digit(string_2))
		errors();
	length1 = _strlen(string_1);
	length2 = _strlen(string_2);
	memory_s = length1 + length2 + 1;
	result = malloc(sizeof(int) * memory_s);
	if (result == NULL)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = string_1[length1] - '0';
		over_v = 0;
		for (length2 = length2 - 1; length2 >= 0; length2--)
		{
			digit2 = string_2[length2] - '0';
			over_v += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = over_v % 10;
			over_v /= 10;
		}
		if (over_v > 0)
			result[length1 + length2 + 1] += over_v;
	}
	for (i = 0; i < memory_s - 1; i++)
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
