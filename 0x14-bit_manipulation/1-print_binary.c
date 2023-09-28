#include "main.h"

/**
 * print_binary - Print binary representation of a decimal number.
 * @n: Decimal number to print in binary.
 */
void print_binary(unsigned long int n)
{
    int i, has_one = 0;
    unsigned long int current;

    for (i = 63; i >= 0; i--)
    {
        current = n >> i;

        if (current & 1)
        {
            _putchar('1');
            has_one = 1;
        }
        else if (has_one)
        {
            _putchar('0');
        }
    }

    if (!has_one)
    {
        _putchar('0');
    }
}

