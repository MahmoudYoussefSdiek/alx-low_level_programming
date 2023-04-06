#include "main.h"
/**
 * check_prime - check all number after if can be divided to n
 *
 * @n: int
 * @flag: int
 *
 * Return: 1 for prime number otherwise 0
 */

int check_prime(int n, int flag)
{

	if (flag >= n && n > 1)
		return (1);
	else if (n % flag == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, flag + 1));
}

/**
 * is_prime_number - check if n is a prime number
 *
 * @n: int
 *
 * Return: 1 for prime number otherwise 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
