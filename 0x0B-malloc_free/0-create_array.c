#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars and initializes with a specific
  *char
  *
  *@size: size of string
  *@c : char to initialize
  *
  *Return: pointer to string
  */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(size);

	if (size == 0 || str == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		str[size] = c;
	}

	return (str);
}
