#include <stdlib.h>
#include <time.h>

/**
  *main - Program entry point
  *
  *Description: the program will tell if the variable n is positive
  *negative or zero
  *
  *Return: 0 for succes
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
