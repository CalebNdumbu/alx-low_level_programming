#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the first occurrence of the substring in the string,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *result = haystack;
    char *pneedle = needle;
    
    while (*haystack)
    {
        while (*needle)
        {
            if (*haystack != *needle)
            {
                break;
            }
            
            haystack++;
            needle++;
        }
        if (!*needle)
        {
            return (result);
        }
        
        needle = pneedle;
        result++;
        haystack = result;
    }
    return (0);
}
