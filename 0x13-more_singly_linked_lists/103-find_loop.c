#include "lists.h"

/**
 * find_listint_loop - Detects the loop in a linked list.
 * @head: The linked list to search for a loop.
 *
 * Return: The address of the node where the loop starts, or NULL if none.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	if (!head)
		return (NULL);

	while (tortoise && hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}

	return (NULL);
}

