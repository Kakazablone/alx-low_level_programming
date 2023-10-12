#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list
  * @head: pointer to the beginning of the list
  * Return: Nothing, void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ahead;

	while (head != NULL)
	{
		ahead = head->next;
		free(head);
		head = ahead;
	}
	head = NULL;
}
