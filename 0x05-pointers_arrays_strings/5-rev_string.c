#include "main.h"
#include <stdio.h>
/**
 * rev_string - Print a string, in reverse.
 * @s: Type char pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length;
	int start = 0;
	int end;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	end  = length - 1;
	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

