#include "main.h"
/**
 * _strpbrk - function to locate the characters from a string
 * @s: string to run and find the characters
 * @accept: arrays being accepted
 * Return: the result
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
