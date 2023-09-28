#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A string containing the binary number.
 *
 * Return: The converted unsigned integer or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
    if (!b)
        return (0);

    unsigned int result = 0;

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);

        result = (result << 1) | (*b - '0');
        b++;
    }

    return (result);
}

