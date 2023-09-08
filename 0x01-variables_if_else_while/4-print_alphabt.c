#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print the alphabet in lowercase, but omit q and e
 * Return: - 0 and exit
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	putchar('\n');
	return (0);
}
