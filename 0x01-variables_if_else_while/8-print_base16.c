#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print 0-15, followed by a new line
 * Return: - 0 and exit
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
	putchar('\n');
	return (0);
}
