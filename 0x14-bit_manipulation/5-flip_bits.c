#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 *                 to transform one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to flip to transform n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Calculate the XOR of the two numbers to find differing bits */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Iterate through the XOR result and count the differing bits. */
	while (xor_result)
	{
		/* Check the least significant bit of xor_result,the rightmost bit */
		/* If it is 1, increment the count. */
		count += xor_result & 1;
		/* Right-shift xor_result by 1 to process the next bit.*/
		xor_result >>= 1;
	}
	return (count);
}
