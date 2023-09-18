#include "main.h"
/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	 int length = 0;
	 int i;
	 int start;

	 /* Calculate the length of the string */
	while (str[length] != '\0')
		length++;
	 /*Calculate the starting position for the second half */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2;
	 /*Print the second half of the string */
	for (i = length - start; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
