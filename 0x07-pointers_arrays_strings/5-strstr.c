#include "main.h"
/**
 * _strpbrk - funtion to locate
 * @s: ptr to char
 * @accept: ptr to char
 * 
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
    char *result = haystack;
    char *pneedle = needle;
    

    while(*haystack)
    {
        while(*needle)
        {
            if(*haystack != *needle)
            {
                break;
            }
            
            haystack++;
            needle++;
        }
        if(!*needle)
        {
            return(result);
        }
        
        needle = pneedle;
        result++;
        haystack = result;
    }
    return (0);
}

