#include "main.h"

/**
  *_strlen_recursion - returns the length of a string.
  *
  *@s: pointer to character in string
  *
  *Return: count
  */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = 1 + _strlen_recursion(s + 1);
	}

	return (count);
}
