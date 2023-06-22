#include "main.h"

/**
  *print_triangle - prints a triangle, followed by a new line.
  *
  *@size: checks size of triangle
  *
  *Return: triangle
  */

void print_triangle(int size)
{
	int g, h, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < size; g++)
		{
			for (h = size - g; h > 1; h--)
			{
				_putchar(' ');
			}
			for (i = 0; i <= g; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
