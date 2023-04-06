#include "main.h"
#include <string.h>

/**
 * check_pal - checks the characters recursively for palindrome
 *
 * @s: string to check
 * @i: iterator
 * @length: lengthgth of the string
 *
 * Return: 1 if palindrome or 0 if not
 */
int check_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pal(s, i + 1, length - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 palindrome or 0 not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen(s)));
}
