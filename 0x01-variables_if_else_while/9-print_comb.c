#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print all combinations of single digit numbers
 * Return: - 0 and exit
 */

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
		i++;
	}
	putchar('\n');
	return (0);
}
