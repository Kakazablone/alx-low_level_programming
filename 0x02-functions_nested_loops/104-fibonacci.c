#include <stdio.h>

/**
  *main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
  *followed by a new line.
  *
  *Return: complete
  */

int main(void)
{
	unsigned long int i;
	unsigned long int b = 1;
	unsigned long int a = 2;
	unsigned long int z = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int a1;
	unsigned long int a2;

	printf("%lu", b);

	for (i = 1; i < 91; i++)
	{
		a = a + b;
		b = a - b;
	}
	b1 = (b / z);
	b2 = (b % z);
	a1 = (a / l);
	a2 = (a % l);

	for (i = 92, i < 99; i++)
	{
		printf(",%lu", a1 + (a2 / l));
		printf("%lu", a2 % l);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 -b2;
	}

	printf("\n");
	return (0);
}
