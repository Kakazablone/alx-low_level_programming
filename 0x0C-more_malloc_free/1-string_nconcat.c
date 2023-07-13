#include <stdlib.h>
#include "main.h"

/**
  *_strlen - returns the length of a string.
  *
  *@s: the string pointer
  *
  *Return: strlen
  */

int _strlen(char *s)
{
	int string = 0;

	if (*s != '\0')
	{
		string++;
		s++;

		string = string + _strlen(s);
	}
	return (string);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int bcount, len, i, j;

	bcount = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (bcount < 0)
		return (NULL);
	if (bcount >= _strlen(s2))
		bcount = _strlen(s2);

	len = _strlen(s1) + bcount + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < bcount; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
