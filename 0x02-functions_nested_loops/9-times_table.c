#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description: For results below 10, add a space for formatting
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

		if (result >= 10)
		{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
		}
		else if (result == 0 && j == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');

	}
}
