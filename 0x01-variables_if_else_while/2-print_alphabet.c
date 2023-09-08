#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print the alphabet in lowercase, followed by a new line
 * Return: - 0 and exit
 */

int main(void)
{
	char letter = "a";

	while (letter <= "z")
	{
		putchar(letter)
		letter++;
	}
	putchar("\n");
	return (0);
}
