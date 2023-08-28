#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:s: A pointer to the starting address of memory to be filled.
 *b: The desired value (a constant byte) to fill the memory with.
 *n: The number of bytes to be changed.
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;
    for(; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return(s);
}
