#include "main.h"
#include <stdlib.h>

/**
  *str_concat - concatenates two strings
  *
  *@s1: 1st string
  *@s2: 2nd string
  *
  *Return: pointer to newly allocated s3
  */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int s1length = 0, s2length = 0, x = 0, y = 0;

	while (s1 && s1[s1length])
	{
		s1length++;
	}
	while (s2 && s2[s2length])
	{
		s2length++;
	}
	s3 = malloc(sizeof(char) * (s1length + s2length + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (x < s1length)
		{
			s3[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (y < s2length)
		{
			s3[x] = s2[y];
			x++;
			y++;
		}
	}
	s3[x] = '\0';

	return (s3);
}
