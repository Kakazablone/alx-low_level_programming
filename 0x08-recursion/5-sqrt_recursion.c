#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @s: number to find its square root
 *
 * Return: natural square root of s
 */

int _sqrt_recursion(int s)
{
	if (s < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(s, 0));
}

/**
 * actual_sqrt_recursion - assist function to find actual root
 *
 * @s: number to find its square root
 * @i: integer to iterate through s
 *
 * Return: actuall natural square root of s
 */

int actual_sqrt_recursion(int s, int i)
{
	if (i * i > s)
	{
		return (-1);
	}
	if (i * i == s)
	{
		return (i);
	}
	return (actual_sqrt_recursion(s, i + 1));
}
