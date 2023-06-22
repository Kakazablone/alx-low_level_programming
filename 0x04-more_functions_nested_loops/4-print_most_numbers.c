#include "main.h"

/**
  *print_most_numbers - Do not print 2 and 4
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
