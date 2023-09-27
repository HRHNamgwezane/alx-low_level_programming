#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, even if it contains a loop.
 * @h: Pointer to the pointer to the head of the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t nodes_freed = 0;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h)
    {
        listint_t *current = *h;
        *h = (*h)->next;
        free(current);
        nodes_freed++;

        if (current <= *h)
            break;
    }

    *h = NULL;

    return (nodes_freed);
}

