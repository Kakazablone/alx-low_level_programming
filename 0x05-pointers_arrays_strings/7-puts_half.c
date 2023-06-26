#include "main.h"

/**
  *puts_half - prints half of a string
  *
  *@str: string to be used
  *
  *Return: half the string
  */

void puts_half(char *str)
{
	int F, f;

	F = 0;
	while (str[F] != '\0')
	{
		F++;
	}

	f = F / 2;

	if (F % 2 == 1)
	{
		f++;
	}

	while (f < F)
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
