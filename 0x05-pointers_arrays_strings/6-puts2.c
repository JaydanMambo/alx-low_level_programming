#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character, followed by a new line
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
