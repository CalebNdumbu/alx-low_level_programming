#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Locates occurrence in the s of any bytes in the accept
 * @s: source string
 * @accept: searching string
 * 
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
    int i;

    while(*s)
    {
        for(i=0;accept[i];i++)
        {
            if(*s==accept[i])
            {
                return(s);
            }
        }
        s++;
    }
    return (NULL);
}
