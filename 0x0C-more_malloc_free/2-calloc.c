#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memeset - Set each byte of a memory block to a specific value.
 * @ptr: Pointer to the memory block.
 * @value: The value to set (interpreted as an unsigned char).
 * @size: Number of bytes to set.
 */
void _memeset(void *ptr, int value, size_t size)
{
	unsigned char *byte_ptr = (unsigned char *)ptr;
	size_t i;

	for (i = 0; i < size; i++)
		byte_ptr[i] = (unsigned char)value;
}

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
		exit(98);
	/* Initialize the memory block to zero */
	_memeset(ptr, 0, nmemb * size);
	return (ptr);
}
