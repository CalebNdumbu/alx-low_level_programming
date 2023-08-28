#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *@s: a pointer to the starting address of memory to be filled.
 *@b: the desired value (a constant byte) to fill the memory with.
 *@n: the number of bytes to be changed.
 * 
 *Return: new array with filled bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;
    for(; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return (s);
}

