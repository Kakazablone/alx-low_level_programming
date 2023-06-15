#include<stdio.h>

/**
  *main - Starting point
  *
  *Description: Write a C program that prints the size of various types
  *on the computer it is compiled and run on.
  *
  *Return: Always 0
  */

int main(void)
{
	printf("Size of a char: %zu byte(s) \n ", sizeof(char));
	printf("Size of an int: %zu byte(s) \n ", sizeof(int));
	printf("Size of a long: %zu byte(s) \n ", sizeof(long));
	printf("Size of a long long: %zu byte(s)\n ", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n ", sizeof(float));

	return (0);
}
