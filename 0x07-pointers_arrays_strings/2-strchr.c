#include "main.h"

/**
 * _strchr - locates a char c in string s
 * @s: pointer to char c
 * @c: char to be found
 *
 * Return: a new string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
