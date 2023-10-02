#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	p = malloc(x * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		p[y] = str[y];
	p[y] = '\0';

	return (p);
}
