#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length_of_string(char *s);
	int twin(char *s, int l);
	int length;

	length = length_of_string(s) - 1;

	return (twin(s, --length));
}

/**
 * get_length - gets length of string
 * @s: string
 * Return: return length of string
 */

int length_of_string(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + length_of_string(++s));
}

/**
 * twin - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int twin(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (twin(++s, l - 2));
	}
	else
		return (0);
}
