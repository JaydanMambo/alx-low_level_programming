#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array of ints.
 * @a: Type int pointer
 * @n: Type int
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i, last;

	last = n - 1;

	for (i = 0; i <= last; i++)
	{
		printf("%d", a[i]);

		if (i < last)
		{
			printf(", ");
		}
	}
	printf("\n");
}
