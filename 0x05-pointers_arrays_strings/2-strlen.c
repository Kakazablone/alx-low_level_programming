#include "main.h"

/**
  *_strlen - returns the length of a string.
  *
  *@s: the string pointer
  *
  *Return: strlen
  */

int _strlen(char *s)
{
	int string = 0;

	if (*s != '\0')
	{
		string++;
		s++;

		string = string + _strlen(s);
	}
	return (string);
}
