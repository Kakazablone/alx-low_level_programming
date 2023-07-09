#include "main.h"

/**
  *_strchr - locates a character in a provided string
  *
  *@s: pointer to character
  *@c: character to be located
  *
  *Return: Null if char not found.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)

			return (s + 1);
		s++;
	}
	return (s + 1);
}
