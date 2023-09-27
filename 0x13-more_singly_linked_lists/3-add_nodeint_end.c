#include "lists.h"

/**
 * add_nodeint_end - adss node to the end of s linked list
 * @head: pointer to first element in list
 * @n: data to insert in the new element
 *
 * Return: pointer to new node, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (!head)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	listint_t *temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
