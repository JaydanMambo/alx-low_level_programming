#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print all single digit numbers from 0-10, followed by a new line
 * Return: - 0 and exit
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
