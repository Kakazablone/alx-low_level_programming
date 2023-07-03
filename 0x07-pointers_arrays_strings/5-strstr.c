#include "main.h"

/**
  *_strstr - finds the first occurrence of the substring needle
  *in the string haystack
  *
  *@haystack: string
  *@needle: occurence being sought
  *
  *Return: Null or beginning of located substring
  */

char *_strstr(char *haystack, char *needle)
{
	int b;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		b = 0;
		if (haystack[b] == needle[b])
		{
			do {
				if (needle[b + 1] == '\0')
				{
					return (haystack);
				}
				b++;
			} while (haystack[b] == needle[b]);

		}
		haystack++;
	}
	return ('\0');
}
