#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list,
 *                      and counts the number of nodes.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		temp = current->next;
		if (temp >= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		current = temp;
	}
	return (count);
}
