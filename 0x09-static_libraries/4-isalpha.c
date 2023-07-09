#include "main.h"

/**
 *_isalpha - check code
 *@c: parameter to be assessed
 *
 *Description: checks for lowercase or uppercase character.
 *
 *Return: 1 if lowercase or uppercase and return 0 if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
