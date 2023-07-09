#include "main.h"

/**
  *_abs - computes the absolute value of an integer
  *@a: checks the value of absolute number
  *Return: The specified absolute value
  */

int _abs(int a)
{
	int abslt;

	if (a < 0)
	{
		abslt = (a * -1);
		return (abslt);
	}
	return (a);
}
