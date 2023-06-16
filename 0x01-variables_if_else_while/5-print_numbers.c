#include<stdio.h>

/**
  *main - Code starts running here
  *
  *Description: prints all single digit numbers of base 10 starting from 0,
  *followed by a new line.
  *
  *Return: 0 for success
  */

int main(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
