#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in linked list a given position
 * @head: pointer to first node in list
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to new node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	for (i = 0; temp; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}

	free(new);
	return (NULL);
}
