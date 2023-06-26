#include <stdio.h>

/**
  *print_array - prints elements of an inte array
  *
  *@a: integer pointer
  *@n: number of elements
  *
  *Return: array
  */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
