#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: first node in the list
 * @index: index of the node 
 *
 * Return: pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int j = 0;
    listint_t *temp;
    temp = head;

    while (temp && j < index)
    {
        temp = temp->next;
    }

    return(temp? temp: NULL);
}
