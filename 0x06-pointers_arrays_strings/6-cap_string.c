#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string to capitalize
 * Return: A pointer to the modified string;
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	/* Next character should be capitalized */
	int i;
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0; str[i] != '\0'; i++)
	{
		char current_char = str[i];

		/* Check if the current character is a lowercase */
		if (capitalize_next && (current_char >= 'a' && current_char <= 'z'))
		{
			str[i] -= ('a' - 'A');
			capitalize_next = 0; /* Reset the flag */
		}
		else
		{
			/* Check if the current character is one of the separators */
			int j;

			for (j = 0; separators[j] != '\0'; j++)
			{
				if (current_char == separators[j])
				{
					capitalize_next = 1; /* Set the flag for the next word */
					break;
				}
			}
		}
		if (!(current_char >= 'a' && current_char <= 'z') &&
				!(current_char >= 'A' && current_char <= 'Z') &&
				!(current_char >= '0' && current_char <= '9'))
		{
			capitalize_next = 1;
		}
	}
	return (str);
}

