#include "main.h"

/**
 * print_alphabet - Displays lowercase alphabet using _putchar
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
