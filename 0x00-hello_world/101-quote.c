#include<unistd.h>

/**
  *main - Our starting point
  *
  *Description: Print a string without using printf & puts
  *
  *Return: 1 to signify success
  */

int main(void)
{

	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		  59);

	return (1);
}
