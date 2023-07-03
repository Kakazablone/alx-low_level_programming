#include "main.h"

/**
  *_strspn - function that searches a string for a set of bytes
  *
  *@s: main string
  *@accept: substring
  *
  *Return: Number of bytes in initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, c;

	x = 0;
	c = 0;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				c++;
				break;
			}
			y++;
		}
		if (accept[y] == '\0')
			break;
		x++;
	}
	return (c);
}
