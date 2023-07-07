#include "main.h"
/**
 * _strncat - main function to concat two arrays
 * @dest: destination to concat
 * @src: source to concat
 * @n: number of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);
}
