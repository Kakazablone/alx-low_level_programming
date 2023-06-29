#include "main.h"

/**
  *_strncat - Concatenates two strings using at most
  *n bytes from src
  *
  *@dest: pointer to receiving string
  *@src: pointer to string to be appended
  *@n: checks bytes
  *
  *Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';

	return (dest);
}
