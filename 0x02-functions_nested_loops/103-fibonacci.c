#include <stdio.h>

/**
  *main - finds and prints the sum of the even-valued terms,
  *followed by a new line.
  *
  *Return: void
  */

int main(void)
{
	int p = 0;
	int q = 1, r = 2, sum = r;

	while (r + q < 4000000)
	{
		r = r + q;

		if (r % 2 == 0)
		{
			sum = sum + r;
			q = r - q;
			p++;
		}
	}

	printf("%ld\n", sum);

	return (0);
}
