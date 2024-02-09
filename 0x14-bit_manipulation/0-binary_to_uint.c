#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int.
 * @b: Binary string.
 *
 * Return: Converted unsigned int or 0 for invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int val = 0;

    if (!b)
        return (0);

    for (i = 0; b[i]; i++)
    {
        if (b[i] < '0' || b[i] > '1')
            return (0);
        val = (val << 1) | (b[i] - '0');
    }

    return (val);
}

