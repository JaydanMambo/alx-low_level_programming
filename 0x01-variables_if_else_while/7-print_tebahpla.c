#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print z - a, followed by a new line
 * Return: - 0 and exit
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
