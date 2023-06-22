#include "main.h"

/**
  *_isdigit - checks for uppercase character.
  *
  *@c:checks for digit
  *
  *Return: 1 if digit and 0 if not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
