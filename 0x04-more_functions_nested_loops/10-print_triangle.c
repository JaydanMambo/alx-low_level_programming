#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 *@size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
