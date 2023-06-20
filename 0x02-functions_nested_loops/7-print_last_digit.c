#include "main.h"

/**
 *print_last_digit - prints the last digit of a number.
 *
 *@n: last digit of a number
 *
 *Return: last digit of number
 */

int print_last_digit(int n)
{
	int z;

	z = n % 10;

	if (z < 0)
	{
		z = z * -1;
	}
	_putchar(z + '0');

	return (z);
}
