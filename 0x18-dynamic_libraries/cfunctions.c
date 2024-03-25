#include <stdio.h>

/**
 * add - Adds two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference of a and b
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: The quotient of a and b
*/
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the modulus of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The remainder of a divided by b
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
