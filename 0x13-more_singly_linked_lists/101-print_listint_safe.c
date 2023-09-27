#include "lists.h"
#include <stdio.h>

/**
 * find_loop - Finds a loop in a linked list (if any).
 * @head: Pointer to the head of the list.
 *
 * Return: The node where the loop starts, or NULL if no loop is found.
 */
listint_t *find_loop(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return ((listint_t *)slow);
        }
    }

    return (NULL);
}

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
    listint_t *loop_node = find_loop(head);
    size_t nodes = 0;

    if (!loop_node)
        return (0);

    do
    {
        nodes++;
        head = head->next;
    } while (head != loop_node);

    return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes = 0;
    listint_t *loop_node = find_loop(head);

    if (!loop_node)
    {
        while (head)
        {
            nodes++;
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }
    }
    else
    {
        while (head != loop_node)
        {
            nodes++;
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }
        printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
    }

    return (nodes);
}
