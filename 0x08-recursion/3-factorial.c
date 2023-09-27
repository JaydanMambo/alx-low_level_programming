#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a number.
 * @n: The input int
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
