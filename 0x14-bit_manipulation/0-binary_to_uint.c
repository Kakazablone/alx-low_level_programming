 #include "main.h"
/**
 *binary_to_uint -  converts a binary number to an unsigned int
 *
 *@b: string of 0s and 1s
 *
 *Return: converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int the_num;

	the_num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		the_num <<= 1;

		if (b[i] == '1')
			the_num++;
	}
	return (the_num);
}
