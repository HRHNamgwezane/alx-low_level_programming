#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int current_index = 0;

	while (current_node != NULL && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	return (current_node);
}
