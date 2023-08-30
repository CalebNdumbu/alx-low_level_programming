#include "main.h"

/**
 * sqrt - return natural square root of n
 * @n: This is the value
 *
 * Return: 1 on success
 */

int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);

	else if (b * b > a)
		return (-1);

	return (sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - calls the sqrt function
 *@n : int
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
