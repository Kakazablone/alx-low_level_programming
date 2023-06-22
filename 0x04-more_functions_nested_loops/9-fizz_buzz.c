#include <stdio.h>

/**
  *fizz_b - the test
  *
  *@n: checks multiples
  *
  *Return: 0
  */

void fizz_b(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
}
