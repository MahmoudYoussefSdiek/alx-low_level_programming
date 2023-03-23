#include "main.h"
/**
 * _isupper - function that filter uppercase
 * @c: print letter
 * Return:  1 if it Uppercase and 0 if it Lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
