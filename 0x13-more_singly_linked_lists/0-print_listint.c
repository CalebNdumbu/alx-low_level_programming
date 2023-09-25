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

    while (ptr != NULL)
    {
<<<<<<< HEAD
        printf("%d\n", ptr->n);
=======
        printf("%d\n, ", ptr->n);
>>>>>>> 465021a63000f6598e6c8f86e4f67b1b5d7f04fb
        number++;
        ptr = ptr->next;
    }
    return (number);
}

