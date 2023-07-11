#include "main.h"
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory,
  *which contains a copy of the string given as a parameter
  *
  *@str: string to be duplicated
  *
  *Return: pointer to duplicate
  */

char *_strdup(char *str)
{
	char *dup;
	int d, length_of_string;

	d = 0;
	length_of_string = 0;

	if (str == NULL)
	{
		return (NULL);

	}
	while (str[length_of_string])
	{
		length_of_string++;
	}
	dup = malloc((length_of_string + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[d] = str[d]) != '\0')
	{
		d++;
	}

	return (dup);
}
