#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
