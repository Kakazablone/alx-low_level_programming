#include "main.h"
#include <stdlib.h>

/**
 * no_of_words - helper function to count the number of words in the string.
 * @s: string
 *
 * Return: number of words.
 */
int no_of_words(char *s)
{
	int quest, h, r;

	quest = 0;
	r = 0;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] == ' ')
		{
			quest = 0;
		}
		else if (quest == 0)
		{
			quest = 1;
			r++;
		}
	}
	return (r);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **red, *ash;
	int a, b = 0, size = 0, words = 0, c = 0, start, finish;

	while (*(str + size))
		size++;
	words = no_of_words(str);
	if (words == 0)
		return (0);

	red = (char **) malloc(sizeof(char *) * (words + 1));
	if (red == NULL)
		return (NULL);

	for (a  = 0; a <= size; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				finish = a;
				ash = (char *) malloc(sizeof(char) * (c + 1));
				if (ash == NULL)
					return (NULL);
				while (start < finish)
					*ash++ = str[start++];
				*ash = '\0';
				red[b] = ash - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	red[b] = NULL;
	return (red);
}
