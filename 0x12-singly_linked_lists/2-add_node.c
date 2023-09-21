#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at beginning of a list_t list
 * @head: pointer to address of head of the list
 * @str: string to be added to new node
 *
 * Return: address of new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_copy = strdup(str);

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = strlen(str_copy);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
