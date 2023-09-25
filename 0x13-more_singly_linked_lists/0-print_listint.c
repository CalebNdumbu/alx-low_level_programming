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
        printf("%d, ", ptr->n);
        number++;
        ptr = ptr->next;
    }
   
    return(number);
}

