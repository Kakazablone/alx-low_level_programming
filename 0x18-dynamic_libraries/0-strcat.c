#include "main.h"

/**
  *_strcat - concatenates two strings
  *
  *@dest: receives new string
  *@src: string to be appended
  *
  *Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}

	for (i = 0; src[i] != '\0'; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';

	return (dest);
}
