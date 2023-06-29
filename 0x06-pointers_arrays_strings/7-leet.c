#include "main.h"

/**
  *leet - encodes a string into 1337.
  *
  *@x: pointer to string
  *
  *Return: pointer
  */

char *leet(char *x)
{
	char letaz[] = "aAeEoOtTlL";
	char letaznum[] = "4433007711";
	int letazct, string_length;

	string_length = 0;

	while (x[string_length] != '\0')
	{
		letazct = 0;
		while (letazct < 10)
		{
			if (letaz[letazct] == x[string_length])
			{
				x[string_length] = letaznum[letazct];
			}
			letazct++;
		}
		string_length++;
	}
	return (x);
}
