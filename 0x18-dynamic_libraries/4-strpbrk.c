#include "main.h"

/**
  *_strpbrk - Search a string for any of a set of bytes.
  *
  *@s: string
  *@accept: used to match
  *
  *Return: pointer to string
  */

char *_strpbrk(char *s, char *accept)
{
	int b, c;
	char *p;

	b = 0;
	while (s[b] != '\0')
	{
		c = 0;
		while (accept[c] != '\0')
		{
			if (accept[c] == s[b])
			{
				p = &s[b];
				return (p);
			}
			c++;
		}
		b++;
	}
	return (0);
}
