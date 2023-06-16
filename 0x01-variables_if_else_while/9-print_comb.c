#include<stdio.h>

/**
  *main - Entry point for the program
  *
  *Description: prints all possible combinations of single-digit numbers.
  *
  *Return: Always 0
  */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
		if (i != 9)
		{
			putchar (',')
		}
	}
	putchar ('\n');

	return (0);
}
