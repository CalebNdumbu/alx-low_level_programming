#include "main.h"

/**
 * flip_bits - Count the number of bits to change between two numbers.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int i, bitCount = 0;
    unsigned long int current;
    unsigned long int exclusiveOr = n ^ m;

    for (i = 63; i >= 0; i--)
    {
        current = exclusiveOr >> i;
        if (current & 1)
            bitCount++;
    }

    return (bitCount);
}

