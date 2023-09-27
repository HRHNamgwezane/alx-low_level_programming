#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in a linked list at a certain index
 * @head: pointer to first element in the list
 * @index: index of node to delete
 *
 * Return: 1 Success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);

	listint_t *current, *prev = NULL;

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return(1);
	}

	current = *head;

	while (i < index)
	{
		if (!current)
			return (-1);
		prev = current;
		current = current->next;
		i++;
	}
	if (current)
	{
		prev->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}
