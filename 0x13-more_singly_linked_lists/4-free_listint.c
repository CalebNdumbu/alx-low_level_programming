#include "lists.h"

/**
 * free_listsint - frees a listint_t list.
 * @head: list to be freed.
*/

void free_listint(listint_t *head)
{
    listint_t *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(head);
    }
}
