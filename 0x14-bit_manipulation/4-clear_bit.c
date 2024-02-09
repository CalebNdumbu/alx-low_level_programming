#include "main.h"

/**
 * clear_bit - Clear the value of a given bit (set it to 0).
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n &= ~(1UL << index);
    return (1);
}

