#include "main.h"

/**
  *cap_string - Capitalizes all words in a string
  *
  *@str: pointer
  *
  *Return: pointer to string
  */

char *cap_string(char *str)
{
	int indx;

	indx = 0;

	while (str[indx] != '\0')
	{
		if (str[indx] == 0 && str[indx] >= 97 && str[0] <= 122)
		{
			str[indx] = str[indx] - 32;
		}
		if (str[indx] == ' ' || str[indx] == '\t' 
			|| str[indx] == '\n'
			|| str[indx] == ',' 
			|| str[indx] == ';' 
			|| str[indx] == '!'
			|| str[indx] == '"' 
			|| str[indx] == ')'
			|| str[indx] == '.' 
			|| str[indx] == '?'
			|| str[indx] == '(' 
			|| str[indx] == '{'
			|| str[indx] == '}')
		{
			if (str[indx + 1] >= 97 && str[indx + 1] <= 122)
			{
				str[indx + 1] = str[indx + 1] - 32;
			}
		}
		indx++;
	}
	return (str);
}
