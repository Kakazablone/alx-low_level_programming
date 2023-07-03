#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - prints the sum of the two diagonals of a square
  *matrix of integers.
  *
  *@a:Pointer
  *@size: size of array
  *
  *Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int x, sum, Z;

	x = 0;
	sum = 0;
	Z = size * size;
	while (x < Z)
	{
		if (x % (size + 1) == 0)
			sum += a[x];
		x++;
	}
	printf("%d, ", sum);

	sum = 0;
	x = 0;
	while (x < Z)
	{
		if (x % (size - 1) == 0 && x != (Z - 1) && x != 0)
			sum += a[x];
		x++;
	}
	printf("%d\n", sum);
}
