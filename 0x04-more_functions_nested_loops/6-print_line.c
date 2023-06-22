#include "main.h"

/**
  *print_line -  draws a straight line in the terminal.
  *
  *@n: number of times character is printed
  *
  *Return: success
  */

void print_line(int n)
{
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
