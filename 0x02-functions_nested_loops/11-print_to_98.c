#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - prints all natural numbers from n to 98, followed
  *by a new line.
  *
  *@n: Natural number to start loop
  *
  *Return: loop
  */

void print_to_98(int n)
{
	int c, d;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c == 98)
				printf("%d\n", c);
			else
				printf("%d\n", c);
		}
	}
	else if (n >= 98)
	{
		for (d = n; d >= 98; d--)
		{
			if (d == 98)
				printf("%d\n", d);
			else
				printf("%d\n", d);
		}
	}
}
