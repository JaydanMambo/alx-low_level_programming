#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings.
 * @s1: type str
 * @s2: type str
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	s1++;
	s2++;
	}
	return (0);
}

