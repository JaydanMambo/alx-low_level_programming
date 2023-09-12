#include "main.h"

/**
 * print_alphabet_x10 - Displays lowercase alphabet 10 times  using _putchar
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}

		_putchar('\n');
	}
}
