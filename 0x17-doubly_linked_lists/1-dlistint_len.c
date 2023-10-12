#include "lists.h"

/**
  * dlistint_len - returns the number of elements in an array
  *
  * @h: pointer to the doubly linked list
  *
  * Return: number of elements in the doubly linked list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
