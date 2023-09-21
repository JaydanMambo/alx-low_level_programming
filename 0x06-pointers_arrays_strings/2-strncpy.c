#include "main.h"
/**
 * _strncpy - copies a string upto n characters
 * @dest: char string
 * @src: char string
 * @n: specified number of bytes from src
 * Return: pointer to resulting string `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest; /*  Save a pointer to the start of dest for returning */

	/* Copy  characters from src to dest, upto n characters */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* Fill the remaining characters in dest with null bytes */
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
