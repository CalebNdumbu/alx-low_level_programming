#include "lists.h"

/**
 * prints all the elements of a listint_t list.
 * @h : head of a linked list
 * 
 * Return: number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
    if (h == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    const listint_t *ptr = h;

    printf("This list contains: ");

    size_t number = 0;

    while (ptr != NULL)
    {
        printf("%d\n, ", ptr->n);
        number++;
        ptr = ptr->next;
    }
   
    return(number);
}
