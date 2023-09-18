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
	int i;

	for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
