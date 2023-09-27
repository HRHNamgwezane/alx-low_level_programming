#include "lists.h"

/**
 * reverse_listint - reverses listint_t linked list
 * @head: pointer to first node in the list
 *
 * Return: pointer to first node in list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
