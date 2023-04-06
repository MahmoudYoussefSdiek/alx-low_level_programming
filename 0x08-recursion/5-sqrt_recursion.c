#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 *
 * @n: number to calculate the sqaure root of
 * @flag: flag number i will use to find sqaure root
 *
 * Return: flag or -1
 */
int actual_sqrt_recursion(int n, int flag)
{
	if (flag * flag > n)
		return (-1);
	if (flag * flag == n)
		return (flag);
	return (actual_sqrt_recursion(n, flag + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
