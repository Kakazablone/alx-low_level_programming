#include "main.h"

/**
  *string_toupper - changes lowercase to upper
  *
  *@c: pointer to string
  *
  *Return: an uppercase pointer
  */

char *string_toupper(char *c)
{
	int l;

	l = 0;
	while (c[l] != '\0')
	{
		if (c[l] >= 97 && c[l] <= 122)
		{
			c[l] = c[l] - 32;
		}
		l++;
	}
	return (c);
}
