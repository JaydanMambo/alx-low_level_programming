#include "lists.h"
/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
