#include "main.h"

/**
 * prime - calculates 1 to n
 * @a: n
 * @b: iterates from 1 to n
 *
 * Return: 1 on success
 */

int prime(int a, int b)
{
	if (a == b)
		return (1);

	else if (a % b == 0)
		return (0);

	return (prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number we are evaluating
 *
 * Return: 1 on success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 2));
}
