#include "main.h"

/**
 * print_number - printint
 * @n: number
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int t;
	unsigned int d;
	unsigned int p = n;
	double tt = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			p = n * -1;
			_putchar('-');
		}

		while (tt <= p)
			tt *= 10;
		t = tt / 10;

		while (t >= 1)
		{
			d = p / t;
			_putchar(d + '0');
			p = (p - (t * d));
			t /= 10;
		}
	}
}
