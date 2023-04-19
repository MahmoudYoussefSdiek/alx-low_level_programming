#include "3-calc.h"

/**
  * op_add - function that get the sum of a and b.
  *
  * @a: first number
  * @b: second number
  *
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function that get the difference of a and b.
  *
  * @a: first number
  * @b: second number
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that get the product of a and b.
  *
  * @a: first number
  * @b: second number
  *
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that get the result of the division of a by b.
  *
  * @a: first number
  * @b: second number
  *
  * Return: int or Error
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function that get the remainder of the division of a by b.
  *
  * @a: first number
  * @b: second number
  *
  * Return: int or Error
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
