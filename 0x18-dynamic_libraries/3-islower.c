#include "main.h"

/**
 *_islower - check code
 *@c: parameter to be assessed
 *
 *Description: checks for lowercase character.
 *
 *Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
