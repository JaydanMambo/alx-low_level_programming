#include "main.h"
#include <stdio.h>
/**
 * _puts - Print a string, followed by a new line, to stdout.
 * @str: Type char pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
