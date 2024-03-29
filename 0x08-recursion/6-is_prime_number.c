#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - detect if a number is a prime number
 * @x: input interger
 * Return: 1 for prime number else 0
 */
int is_prime_number(int x)
{
	if (x == 0)
		return (0);
	if (x < 0)
		return (0);
	if (x == 1)
		return (0);
	return (is_prime(x, 2));
}
