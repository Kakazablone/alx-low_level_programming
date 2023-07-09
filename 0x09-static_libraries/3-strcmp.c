#include "main.h"

/**
  *_strcmp - compares value of two strings
  *
  *@s1: String to be compared
  *@s2: string to be compared
  *
  *Return: value of comparison
  */

int _strcmp(char *s1, char *s2)
{
	int c, v;

	c = 0;

	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}

	v = s1[c] - s2[c];

	return (v);
}
