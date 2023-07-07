#include "main.h"

/**
 * _islower - main function
 *
 * @c: a comparison character
 *
 *Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
