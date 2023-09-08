#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print 0-9, followed by a new line
 * Return: - 0 and exit
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
