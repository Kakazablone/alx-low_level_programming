#include "main.h"

/**
  *print_sign - prints the sign of a number.
  *
  *@n: is value greater than 0, higher or lower
  *
  *Return: 1 if greater, 0 if 0 and -1 if less than
  *
  */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
