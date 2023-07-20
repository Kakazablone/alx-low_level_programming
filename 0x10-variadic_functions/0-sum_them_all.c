#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - returns the sum of all its parameters
  *
  *@n: sample the number of arguments
  *
  *Return: 0
  */

int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;

	va_start(args, n);

	/* loop through/access all arguments stored in the valist */
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);

	return (sum);
}
