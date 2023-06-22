#include "main.h"

/**
  *print_numbers - prints the numbers, from 0 to 9, followed by a new line
  *
  *Description: use loop
  *
  *Return: printed numbers in loop
  */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
