#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the first element.
 *
 * Return: The head node's data or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int number;

    if (!*head)
        return (0);

    number = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;

    return (number);
}

