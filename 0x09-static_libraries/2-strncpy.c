#include "main.h"
/**
 * _strncpy - main function to copy the string
 * @dest: destination to copy to
 * @src: the souce to copy from
 * @n: number of places to copy
 * Return: destination value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
