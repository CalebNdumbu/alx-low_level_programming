#include "main.h"

/**
 * _strlrn - returns the length of a string
 * @s: string to evaluate length of
 * 
 * Return : length of the string
 */
 
 int _strlen(char *s)
 {
     int i;
     i = 0;
     
      while(s[i] != '\0')
      {
          i++;
      }
     return(i);
     
 }
