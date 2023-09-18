#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{

	/* Variable to iterate through the characters */
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
		/* Copy each character from src to dest */
	}
	dest[n] = '\0';
	return (dest);
}
