#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print all combinations of single digit numbers
 * Return: - 0 and exit
 */

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	if (n < 99){
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
