#include<stdio.h>

/**
  *main - Entry point for the program
  *
  *Description: prints all the numbers of base 16 in lowercase,
  *followed by a new line.
  *
  *Return: Always 0
  */

int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar (i + '0');
		if (i != 15)
		{
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
