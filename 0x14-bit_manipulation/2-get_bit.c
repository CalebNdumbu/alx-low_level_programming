#include "main.h"

/**
 * get_bit - Get the value of a bit at a specified index.
 * @n: Decimal number to search.
 * @index: Index of the bit to retrieve.
 *
 * Return: Value of the bit at the specified index, or -1 if out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bitValue;

    if (index > 63)
        return (-1);

    bitValue = (n >> index) & 1;

    return (bitValue);
}

