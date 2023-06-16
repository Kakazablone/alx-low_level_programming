#include <stdio.h>

/**
  *main - Start point
  *
  *Description: prints all possible combinations of
  *two two-digit numbers.
  *
  *Return: 0 is success
  */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i < 99 || j < 99)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}

	putchar ('\n');

	return (0);
}
