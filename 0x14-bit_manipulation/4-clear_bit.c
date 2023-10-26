#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which the bit should be cleared.
 * @index: The index of the bit to clear, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/**
	 * Use bitwise AND with the complement of a bit mask to clear the bit:
	 * - 1UL is a bit mask with a single '1' at the desired position.
	 * - Shifting this bit mask to the left by 'index' positions
	 *   positions the '1' at the desired bit to clear.
	 * - To clear the bit, we use bitwise NOT on the bit mask to create
	 *   a mask with all bits set except the one at 'index', and then we
	 *   perform a bitwise AND with the original number 'n' to clear the bit.
	 */
	*n &= ~(1UL << index);
	return (1);
}
