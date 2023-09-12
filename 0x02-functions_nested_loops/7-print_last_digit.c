#include "main.h"

/**
 * print_last_digit - computes the absolute value of an integer.
 *@n: The number to be checked
 *
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = n % 10;
		_putchar(n + '0');

		return (last_digit);
	}
	else
	{
		last_digit = -1 * (n % 10);
		 _putchar(n + '0');

	return (last_digit);
	}
}
