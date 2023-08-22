#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no valid integer is found
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while (s[i] == ' ')
    {
        i++;
    }

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    while (s[i] != '\0')
    {
        
        if (s[i] < '0' || s[i] > '9')
        {
            break;
        }

       
        result = result * 10 + (s[i] - '0');
        i++;
    }

  
    return sign * result;
}

