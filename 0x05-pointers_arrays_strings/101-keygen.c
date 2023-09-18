#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates and prints a sequence of random printable ASCII
 * characters until their combined ASCII values sum up to a specific target value.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int target_sum = 2772;
	int current_sum = 0;

	/* Seed the random number generator with the current time */
	srand(time(NULL));

	while (current_sum < target_sum)
	{
		char random_char = rand() % 94 + 33; /* Generate a random printable ASCII character */
		int ascii_value = (int)random_char;

		if (current_sum + ascii_value <= target_sum)
		{
			printf("%c", random_char);
			current_sum += ascii_value;
		}
	}

	printf("\n");

	return (0);
}

