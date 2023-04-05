#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: square matrix of integers
 * @size: the size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, column;
	int mainDiagonal = 0;
	int reverseDiagonal = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
			{
				mainDiagonal += a[(size + 1) * row];
			}
			if ((row + column) == (size - 1))
			{
				reverseDiagonal += a[(size - 1) * (row + 1)];
			}
		}
	}

	printf("%d, %d\n", mainDiagonal, reverseDiagonal);
}
