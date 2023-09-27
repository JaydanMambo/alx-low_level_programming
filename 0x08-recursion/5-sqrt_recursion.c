#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Allows operation of _sqrt_recursion
 * @x: type int that define sqrt root
 * @y: type int that compares x
 * Return: sqrt int or -1 if not int
 */

int _sqrt(int x, int y)
{
	int square;

	square = y * y;
	if (square == x)
		return (y);
	else if (square < x)
		return (_sqrt(x, y + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural sqr root number.
 * @n: type int
 * Return: If n not sqt root then return -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
