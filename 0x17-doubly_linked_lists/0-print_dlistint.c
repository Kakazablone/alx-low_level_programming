#include "lists.h"

/**
  * print_dlistint - prints all elements in a doubly linked list
  *
  * @h: the pointer to the doubly linked list
  *
  * Return: the number of elements in the doubly linked list
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
