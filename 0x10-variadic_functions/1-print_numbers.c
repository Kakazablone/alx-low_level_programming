#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - function that prints numbers, followed by a new line
  *
  *@char: pointer to separator
  *@n: number of arguments
  *
  *Return: Nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (i < (n-1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
