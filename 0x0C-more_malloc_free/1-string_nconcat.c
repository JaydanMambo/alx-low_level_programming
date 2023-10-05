#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings, using at most n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated;
	unsigned int i, j;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculate the lengths of the two strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	/* Use the entire s2 if n is greater than or equal to its length */
	if (n >= len2)
		n = len2;
	/* Allocate memory for the concatenated string */
	concatenated = malloc((len1 + n + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	/* Copy s1 to the new string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	/* Concatenate the first n bytes of s2 */
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];
	/* Add null terminator */
	concatenated[i] = '\0';
	return (concatenated);
}

