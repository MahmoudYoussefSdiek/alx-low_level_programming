#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi -  convert a string to an integer
 *
 * @s: string
 *
 * Return: num
 */

int _atoi(char *s)
{
	int i, sign, num;

	if (s == NULL)
		return (0);
	i = 0;
	sign = 1;
	num = 0;
	while (s[i] != '\0')
	{

		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{

			if (sign > 0 && num > INT_MAX / 10)
				return (INT_MAX);
			if (sign > 0 && num == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)
				return (INT_MAX);
			if (sign < 0 && num < INT_MIN / 10)
				return (INT_MIN);
			if (sign < 0 && num == INT_MIN / 10 && s[i] - '0' > -(INT_MIN % 10))
				return (INT_MIN);
			num = num * 10 + sign * (s[i] - '0');
		}
		else if (num != 0)
			break;
		i++;
	}
	return (num);
}
