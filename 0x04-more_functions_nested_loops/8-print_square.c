#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 *@size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int j, i;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
