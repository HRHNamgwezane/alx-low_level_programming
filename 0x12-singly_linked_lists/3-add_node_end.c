#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of list
 * @str: string to duplicate and store in new node
 *
 * Return: addressof new element, otherwise NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = strlen(str);

	if (str == NULL)
		return (NULL);

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
