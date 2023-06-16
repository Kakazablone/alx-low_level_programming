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
	int a, b, c, d;

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			for (c = b + 1; c < 100; c++)
			{
				for (d = c + 1; d < 100; d++)
				{
					putchar (a + '0');
					putchar (b + '0');
					putchar (' ');
					putchar (c + '0');
					putchar (d + '0');

					if (a < 6 || b < 7 || c < 8 || d < 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
		putchar ('\n');

		return (0);
}
