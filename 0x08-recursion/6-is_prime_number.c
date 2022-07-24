#include "main.h"

/**
 * is_prime_number - prime numbers
 * @n: the prime number
 * Return: 0
 */

int is_prime_number(int n)
{
	return (_is_prime(n, 1));
}

/**
 * _is_prime - checks if an integer is prime
 * @a:variable a
 * @b:variable b = 1
 * Return: return 1 or 2
 */

int _is_prime(int a, int b)
{
	if (a <= 1)
		return (0);
	if (a % b == 0 && b < 1)
		return (0);
	if ((a / b) < b)
		return (1);
	return (_is_prime(a, b + 1));
}
