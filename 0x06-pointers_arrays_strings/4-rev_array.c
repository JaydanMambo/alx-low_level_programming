#include "main.h"

/**
 * reverse_array - Function that reverse the content of an array of int
 * @a: Type int
 * @n: Type int
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	 int start = 0;
	 int end = n - 1;
	 int temp;

	while (end > start)
	{
		temp = a[start];
		 a[start] = a[end];
		 a[end] = a[temp];
		 start++;
		 end++;
	}
}
