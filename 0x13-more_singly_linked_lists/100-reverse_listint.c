#include "lists.h"
/**
 * *reverse_listint - Reverses a listint_t linked list
 * @head:  A pointer to a pointer to the head of the list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward;
	listint_t *back = NULL;

	if (head  == NULL)
		return (NULL);
	forward = *head;
	while (forward != NULL)
	{
		forward = forward->next;
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}
	*head = back;
	return (*head);
}
