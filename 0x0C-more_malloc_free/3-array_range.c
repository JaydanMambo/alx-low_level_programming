#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: A pointer to the newly created array,
 *        or NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);
	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	/* Initialize the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
