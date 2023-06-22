#include "main.h"

/**
  *print_diagonal - draws a diagonal line on the terminal
  *
  *@n: checks how many times \ should be printed.
  *
  *Return: line
  */

void print_diagonal(int n)
{
	int g, h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < n; g++)
		{
			for (h = 0; h < g; h++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
