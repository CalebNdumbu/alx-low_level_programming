#include "holberton.h"

/**
 * _strcpy -  copies string
 *
 * @dest: arg char
 * @src: arg char
 *
 * Return: string to stdout
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
