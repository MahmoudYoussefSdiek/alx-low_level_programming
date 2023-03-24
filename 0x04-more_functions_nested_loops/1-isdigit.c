#include "main.h"
/**
 * _isdigit - fuction that checks for a digit
 * @c: print letter
 * Return:  1 for digit and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
