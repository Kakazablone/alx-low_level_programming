#include "main.h"

/**
  *reverse_array - reverses content of an array
  *containing integer elements
  *
  *@a: pointer to the array
  *@n: Count of elemnts in array
  *
  *Return: nil
  */

void reverse_array(int *a, int n)
{
	int c, tmp;

	c = 0;
	n = n - 1;

	while (c < n)
	{
		tmp = a[c];
		a[c++] = a[n];
		a[n--] = tmp;
	}
}
