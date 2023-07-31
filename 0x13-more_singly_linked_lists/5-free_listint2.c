#include "lists.h"

/**
  *free_listint2 - frees a listint_t list
  *
  *@head: pointer to list
  *
  *Return: Nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
