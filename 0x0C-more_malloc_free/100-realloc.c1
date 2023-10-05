#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: A pointer to the memory block previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;
	char *char_ptr_new;
	char *char_ptr_old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	/* Determine the size to copy (minimum of old and new sizes) */
	copy_size = (old_size < new_size) ? old_size : new_size;
	/* Cast pointers to characters for byte-wise copying */
	char_ptr_new = (char *)new_ptr;
	char_ptr_old = (char *)ptr;
	/* Copy data from the old block to the new block */
	for (i = 0; i < copy_size; i++)
		char_ptr_new[i] = char_ptr_old[i];
	free(ptr);
	return (new_ptr);
}
