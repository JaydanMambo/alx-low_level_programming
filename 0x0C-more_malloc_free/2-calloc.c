#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of elements
 *             and initialize to zero.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated and initialized memory,
 *          or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocate memory for the array and initialize to zero */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	/* Use memset to initialize the memory block to zero */
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

