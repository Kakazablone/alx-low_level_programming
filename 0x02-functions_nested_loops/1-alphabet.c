#include "main.h"

/**
  *main - Funtion starts here
  *
  *Description: prints the alphabet, in lowercase, followed by a new line.
  *
  *Return: 0
  *
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}
