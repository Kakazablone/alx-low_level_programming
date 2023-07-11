#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr -  function that concatenates all the arguments
  * @ac: the argument count
  * @av: argument vector
  *
  * Return: a character value
  */
char *argstostr(int ac, char **av)
{
	int q = 0, w = 0, e = 0, p = 0;
	char *r;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (q < ac)
	{
		while (av[q][w])
		{
			e++;
			w++;
		}
		w = 0;
		q++;
	}
	r = malloc((sizeof(char) * e) + ac + 1);
	q = 0;
	while (av[q])
	{
		while (av[q][w])
		{
			r[p] = av[q][w];
			p++;
			w++;
		}
		r[p] = '\n';
		w = 0;
		p++;
		q++;
	}

	p++;
	r[p] = '\0';
	return (r);
}
