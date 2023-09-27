#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: data inside the deleted element, otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = temp->n;

	if (!head || !*head)
		return (0);

	*head = (*head)->next;
	free(temp);

	return (num);
}
