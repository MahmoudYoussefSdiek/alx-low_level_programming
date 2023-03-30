#include "main.h"

/**
 * reverse_array - reverse array of integers
 *
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int flag;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		flag = a[i];
		a[i] = a[j];
		a[j] = flag;
		j--;
	}
}
