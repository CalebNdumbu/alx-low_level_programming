#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *temp = head;

    while (temp)
    {
        sum = sum + temp->n;
        temp = temp->next;
    }
    return (sum);
}
