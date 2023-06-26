#include "main.h"
#include "2-strlen.c"

/**
  *rev_string - reverses a string.
  *
  *@s: the string to be reversed
  *
  *Return: nil
  */

void rev_string(char *s)
{
	int i;
	char b;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		b = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = b;
	}
}
