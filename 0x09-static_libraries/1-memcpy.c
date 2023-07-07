#include "main.h"
/**
 * * _memcpy - function that copies from source to destination
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: number of times to copy
 *
 * Return: the value of the string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
