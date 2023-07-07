#include "main.h"
/**
 * _memset - sets memory to array
 * @s: array to set
 * @n: number of times to set
 * @b: value to be set
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
