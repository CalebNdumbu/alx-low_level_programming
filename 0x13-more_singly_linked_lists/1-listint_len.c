#include "list.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
    size_t number = 0;
    const listint_t *ptr = h;

    while (ptr)
    {
        number++;
        ptr = ptr->next;
    }

    return (number);
}
