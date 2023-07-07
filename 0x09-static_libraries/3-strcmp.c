#include "main.h"
/**
 * _strcmp - main function to compare the strings
 * @s1: the first string
 * @s2: the second string
 * Return: value of the string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
