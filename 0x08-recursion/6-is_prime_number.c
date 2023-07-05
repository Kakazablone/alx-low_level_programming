#include "main.h"

/**
 * is_prime_number - returns 1 if integer is prime, otherwise 0
 *
 * @n: input integer to check if prime
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - assist function to recursively check if number
 *is prime
 * @n: input integer to check if prime
 * @i: variable to help iterate through n
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
