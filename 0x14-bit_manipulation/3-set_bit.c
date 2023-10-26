#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which the bit should be set.
 * @index: The index of the bit to set, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/**
	 * Use bitwise OR to set the bit at the specified index:
	 * 1UL is a bit mask with a single '1' at the desired position.
	 * Shifting this bit mask to the left by 'index' positions
	 * sets the 'index' bit to 1 while leaving other bits unchanged.
	 * Finally, bitwise OR is used to set the bit without affecting others.
	 */
	*n |= (1UL << index);
	return (1);
}
