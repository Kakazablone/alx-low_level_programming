#include "main.h"

/**
  *_memcpy - copies n bytes from src to dest
  *
  *@dest: receiving string
  *@src: string to be copied
  *@n: number of bytes
  *
  *Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
