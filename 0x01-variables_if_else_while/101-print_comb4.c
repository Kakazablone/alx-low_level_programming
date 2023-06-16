#include <stdio.h>

/**
  *main - Code runs from here
  *
  *Description: prints all possible different combinations of two digits.
  *
  *Return: always 0
  */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar (a + '0');
				putchar (b + '0');
				putchar (c + '0');

				if (a < 7 || b < 8 || c < 9)
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}
		putchar ('\n');

		return (0);
}
