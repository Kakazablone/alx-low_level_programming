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

	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, string, sizeof(string));

	return (0);
}
