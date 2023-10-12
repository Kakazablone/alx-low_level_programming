#include "lists.h"

/**
  * sum_dlistint - sums all elements in a doubly linked list
  *
  * @head: pointer to the beginning of the list
  *
  * Return: the sum of all the elements of the list
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
