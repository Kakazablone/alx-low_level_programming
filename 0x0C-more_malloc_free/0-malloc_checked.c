#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked -  allocates memory using malloc &
  *function should cause normal process termination with a status value of 98
  *
  *@b: size
  *
  *Return: pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
	{
		exit(98);
	}
	return (z);
}
