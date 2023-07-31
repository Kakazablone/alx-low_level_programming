#include "lists.h"

/**
  *pop_listint - deletes the head node of a listint_t linked list
  *
  *@head: pointer to linked list
  *
  *Return: head node’s data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	ptr = *head;

	if (ptr == NULL)
	{
		return (0);
	}

	*head = ptr->next;
	n = ptr->n;
	free(ptr);

	return (n);
}
