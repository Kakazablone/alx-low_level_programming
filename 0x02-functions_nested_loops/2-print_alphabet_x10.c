#include "main.h"

/**
  *print_alphabet_x10 - Funtion starts here
  *
  *Description: prints the alphabet, in lowercase, followed by a new line.
  *
  *Return: 0
  *
  */

void print_alphabet_x10(void)
{
	int l = 0;
	char c;

	while (l < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	l++;
	}
}
