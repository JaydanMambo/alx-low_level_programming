#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h:A pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	const listint_t *currentv = h;

	while (currentv != NULL)
	{
		printf("%i\n", currentv->n);
		currentv = currentv->next;
		no_nodes++;
	}
	return (no_nodes);
}
