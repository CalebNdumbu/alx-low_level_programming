#include "lists.h"

/**
 * print_list - prints all the elements of a listint_t list.
 * @h : linked list
 *
 * Return: number of nodes
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

