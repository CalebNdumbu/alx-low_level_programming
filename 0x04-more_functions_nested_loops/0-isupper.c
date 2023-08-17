#include "main.h"
/**
 * _isupper - Determine whether a character is in uppercase.
 * @c: The character to be checked.
 * Return: Returns 1 if the character is uppercase, 0 if not.
 */
int _isupper(int c)
{
    if ((c >= 'A') && (c <= 'Z'))
        return (1);

    return (0);
}

