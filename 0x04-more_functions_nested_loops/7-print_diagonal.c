#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 *@n: line length
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int c, i;

	for (c = 0; c < n; c++)
	{
		for (i = 0; i < c; i++)
		{
			_putchar(' ');
		}
			_putchar(92);
			_putchar('\n');
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
