#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int z;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		p[z] = c;
	return (p);
}
