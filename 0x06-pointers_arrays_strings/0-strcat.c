#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: char string
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest; /*  Save a pointer to the start of dest for returning */

	/* Find the end of the destination string */
	while (*dest != '\0')
		dest++;
	/* Append characters from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		 src++;
	}
	/* Add a null-terminator to the concatenated string */
	*dest = '\0';
	return (result);
}
