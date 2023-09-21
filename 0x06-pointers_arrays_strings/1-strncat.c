#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: char string
 * @src: char string
 * @n: specified number of bytes from src
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest; /*  Save a pointer to the start of dest for returning */

	/* Find the end of the destination string */
	while (*dest != '\0')
		dest++;
	/* Append characters from src to dest, upto n characters */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		 src++;
		 n--;
	}
	/* Add a null-terminator to the concatenated string */
	*dest = '\0';
	return (result);
}
