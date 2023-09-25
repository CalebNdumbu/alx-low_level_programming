#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to a pointer to the list to be freed.
 */
void free_listint2(listint_t **head)
{
    if (!*head)
        return;

    listint_t *temp;

    while (*head)
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }

    *head = NULL;
}

