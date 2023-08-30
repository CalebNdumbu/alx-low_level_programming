#include "main.h"

/**
 * palind - calculate length of string
 * @a: string
 * @l: int to count length
 *
 * Return: 1 on success
 */

int palind(char *a, int l)
{
	if (*a == 0)
		return (l - 1);

	return (palind(a + 1, l + 1));
}

/**
 * palind2 - compare string to its reverse
 * @a: string
 * @l: length
 *
 * Return: 1 on success
 */

int palind2(char *a, int l)
{
	if (*a != *(a + 1))
		return (0);

	else if (*a == 0)
		return (1);

	return (palind2(a + 1,l - 2));
}

/**
 * is_palindrome -  checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 on success
 */

int is_palindrome(char *s)
{
	int l;
	l = palind(s, 0);
	return (palind2(s, l));
}
