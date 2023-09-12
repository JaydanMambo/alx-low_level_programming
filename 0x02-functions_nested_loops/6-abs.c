#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *@j: The integer to be checked
 *
 * Return: j if it positive number
 *	  -j if it is  negative number
 */

int _abs(int j)
{
	if (j >= 0)
		return (j);
	else
		return (-j);
}
