#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t number = 0;
    const listint_t *ptr = h;

    while (ptr)
    {
        printf("%d\n", ptr->n);
        number++;
        ptr = ptr->next;
    }

    return (number);
}
