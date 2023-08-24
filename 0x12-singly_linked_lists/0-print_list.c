#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h - pointer to  list_t list
 *
 * Return: total number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
