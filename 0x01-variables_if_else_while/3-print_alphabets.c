#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print the alphabet in lower & upper case, followed by a new line
 * Return: - 0 and exit
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
