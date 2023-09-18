#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string, in reverse followed by a new line.
 * @s: Type char pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

