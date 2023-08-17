#include "main.h"

/**
 * _isupper - A function to determine if a character is in uppercase.
 * @c: The character to be examined.
 * Return: Returns 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    if ((c >= 'A') && (c <= 'Z'))
        return (1);
    else
        return (0);
}

