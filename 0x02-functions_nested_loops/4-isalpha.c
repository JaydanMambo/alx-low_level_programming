#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The character to be checked
 *
 * Return: 1 if c is an alphabet, either lowercase or uppercase
 *         Otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
